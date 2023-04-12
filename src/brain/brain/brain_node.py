import rclpy
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from std_msgs.msg import String

from interfaces.srv import ComponentStatus


class BrainNode(Node):

    def __init__(self):
        super().__init__('brain_node')
        self.callback_group = ReentrantCallbackGroup()

        self.objectDetectionSubscriber = self.create_subscription(
            String,
            'object_detection',
            self.object_detection_callback,
            10,
            callback_group=self.callback_group
        )

        self.componentStatusServiceTimer = self.create_timer(
            5,
            self.send_component_status_request,
            callback_group=self.callback_group
        )

        self.componentStatusClient = self.create_client(
            ComponentStatus,
            'component_status'
        )

        while not self.componentStatusClient.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting...')

        self.request = ComponentStatus.Request()

    def object_detection_callback(self, msg):
        self.get_logger().info('I heard: "%s"' % msg.data)
        if "object" in msg.data:
            self.get_logger().info('Sending move request to actuator')
        else:
            self.get_logger().info('Sending no request to actuator')

    async def send_component_status_request(self):
        self.request.component = 'camera'
        self.future = self.componentStatusClient.call_async(self.request)
        result = await self.future
        self.get_logger().info(f"Service response is:{result.status}")


def main(args=None):
    rclpy.init(args=args)
    brainNode = BrainNode()
    executor = MultiThreadedExecutor()
    rclpy.spin(brainNode, executor)
    brainNode.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
