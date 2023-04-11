import rclpy
from rclpy.node import Node

from std_msgs.msgs import String
from custom_interfaces.srv import ComponentStatus

class VisionNode(Node):

    def __init__(self):
        super.__init__('vision_node')

        self.cameraSubscriber = self.create_subscription(String, 'camera', self.camera_callback, 10)
