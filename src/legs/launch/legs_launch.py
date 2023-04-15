from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='legs',
            namespace='legs_server',
            executable='legs_action_server',
            name='server'
        ),
        Node(
            package='legs',
            namespace='legs_client',
            executable='legs_action_client',
            name='client'
        )
    ])
