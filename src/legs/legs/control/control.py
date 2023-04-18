from adafruit_servokit import ServoKit
from enum import IntEnum

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
