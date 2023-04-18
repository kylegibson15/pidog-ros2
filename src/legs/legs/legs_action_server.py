import time
import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from adafruit_servokit import ServoKit
from enum import IntEnum

from interfaces.action import Movement

SERVO_CHANNELS = 16
MIN_PULSE_WIDTH = 500
MAX_PULSE_WIDTH = 2500


class PWMPin(IntEnum):
    """Maps Joints to PWM Pins"""

    FR_HUMERUS = 14
    FR_RADIUS = 15
    FR_SHOULDER = 13
    FL_HUMERUS = 10
    FL_RADIUS = 11
    FL_SHOULDER = 9
    BR_FEMUR = 7
    BR_TIBIA = 6
    BL_FEMUR = 3
    BL_TIBIA = 2


class Control:
    """Root class for controlling PiDog's PWM Pin functions"""

    def __init__(self):
        self.kit = ServoKit(channels=SERVO_CHANNELS)
        for motor_pin in PWMPin:
            self.kit.servo[motor_pin.value].set_pulse_width_range(
                MIN_PULSE_WIDTH, MAX_PULSE_WIDTH)

    def set_logger(self, logger):
        self.logger = logger

    def set_angle(self, pin: int, degrees: int):
        self.logger.info(f"setting servo {pin} to {degrees} degrees")
        self.kit.servo[pin].angle = degrees

    def stand(self):
        self.set_angle(PWMPin.FR_HUMERUS, 110)  # + (taller)
        self.set_angle(PWMPin.FR_RADIUS, 40)  # - (taller)
        self.set_angle(PWMPin.FR_SHOULDER, 90)  #
        self.set_angle(PWMPin.FL_HUMERUS, 60)  # - (taller)
        self.set_angle(PWMPin.FL_RADIUS, 140)  # + (taller)
        self.set_angle(PWMPin.FL_SHOULDER, 95)  #
        self.set_angle(PWMPin.BR_FEMUR, 75)  # + (taller)
        self.set_angle(PWMPin.BR_TIBIA, 70)  # - (taller
        self.set_angle(PWMPin.BL_FEMUR, 100)  # - (taller)
        self.set_angle(PWMPin.BL_TIBIA, 110)  # + (taller)

    def set_to_neutral_position(self):
        self.set_angle(PWMPin.FR_HUMERUS, 90)
        self.set_angle(PWMPin.FR_RADIUS, 60)
        self.set_angle(PWMPin.FR_SHOULDER, 90)
        self.set_angle(PWMPin.FL_HUMERUS, 90)
        self.set_angle(PWMPin.FL_RADIUS, 120)
        self.set_angle(PWMPin.FL_SHOULDER, 95)
        self.set_angle(PWMPin.BR_FEMUR, 65)  # + (taller)
        self.set_angle(PWMPin.BR_TIBIA, 90)
        self.set_angle(PWMPin.BL_FEMUR, 110)  # - (taller)
        self.set_angle(PWMPin.BL_TIBIA, 90)


class LegsActionServer(Node):

    def __init__(self, control: Control):
        super().__init__('legs_action_server')
        self.get_logger().info('initializing action server')
        self.control = control
        self.control.set_logger(self.get_logger())
        self._action_server = ActionServer(
            self,
            Movement,
            'movement',
            self.execute_callback
        )

    def execute_callback(self, goal_handle):
        self.get_logger().info(f'goal_handle.request {goal_handle.request}')
        self.get_logger().info(f'Executing goal...{goal_handle.goal_id}')

        feedback_msg = Movement.Feedback()
        feedback_msg.feedback = 'standing at 50% complete'
        goal_handle.publish_feedback(feedback_msg)

        if goal_handle.request.command == 'stand':
            self.control.stand()
        else:
            self.control.set_to_neutral_position()

        feedback_msg.feedback = 'pidog is 100% standing - action complete'
        time.sleep(1)

        goal_handle.succeed()

        result = Movement.Result()
        result.result = feedback_msg.feedback
        return result


def main(args=None):
    rclpy.init(args=args)
    legs_action_server = LegsActionServer(Control())
    rclpy.spin(legs_action_server)


if __name__ == '__main__':
    main()
