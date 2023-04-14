import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node

from interfaces.action import Movement


class LegsActionClient(Node):

    def __init__(self):
        super().__init__('legs_action_client')
        self.action_client = ActionClient(
            self,
            Movement,
            'movement'
        )

    def send_goal(self, command):
        goal_msg = Movement.Goal()
        goal_msg.command = command

        self._action_client.wait_for_server()

        return self._action_client.send_goal_async(goal_msg)


def main(args=None):
    rclpy.init(args=args)
    action_client = LegsActionClient()
    future = action_client.send_goal('stand')
    rclpy.spin_until_future_complete(action_client, future)


if __name__ == '__main__':
    main()
