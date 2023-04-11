import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from interfaces.srv import ComponentStatus


class VisionNode(Node):

    def __init__(self):
        super().__init__('vision_node')

        self.cameraSubscriber = self.create_subscription(
            String, 'camera', self.camera_callback, 10)

        self.objectDetectionPublisher = self.create_publisher(
            String, 'object_detection', 10)

        self.componentStatusService = self.create_service(
            ComponentStatus, 'component_status', self.handle_component_status)

    def camera_callback(self, message):
        """Identify if object in view"""
        msg = String()
        if message.data == "trash":
            msg.data = "Object Detected"
        else:
            msg.data = "No Object Detected"
        self.objectDetectionPublisher.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.data)

    def handle_component_status(self, request, response):
        self.get_logger().info('Vision Component Status Server Called')
        if request.component == "camera":
            response.status = "Camera battery is at 100%"
        else:
            response.status = "Error: Component Unavailable"
        return response


def main(args=None):
    rclpy.init(args=args)
    vision_node = VisionNode()
    rclpy.spin(vision_node)
    vision_node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
