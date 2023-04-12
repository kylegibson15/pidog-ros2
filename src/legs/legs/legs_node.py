import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

from interfaces.action import Stand

class LegsActionServer(Node):

    def __init__(self):
        super().__init__('legs_action_server')
        self._action_server = ActionServer(
                    self,
                    Stand,
                    'movement',
                    self.execute_callback
                )

    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')
        result = Stand.Result()
        return result

def main(args=None):
    rclpy.init(args=args)
    legs_action_server = LegsActionServer()
    rclpy.spin(legs_action_server)


if __name__ == '__main__':
    main()
