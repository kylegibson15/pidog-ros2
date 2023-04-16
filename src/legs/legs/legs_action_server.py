import time
import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

from interfaces.action import Movement
from control.control import Control


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
        self.get_logger().info(f'Executing goal...{goal_handle.goal_id}')

        feedback_msg = Movement.Feedback()
        feedback_msg.feedback = 'standing at 50% complete'
        goal_handle.publish_feedback(feedback_msg)
        self.control.stand()

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
