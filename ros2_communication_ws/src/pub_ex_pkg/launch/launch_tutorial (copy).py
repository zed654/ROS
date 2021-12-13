from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    test_param = 3
    return LaunchDescription([
        Node(
            package='pub_ex_pkg',
            namespace='turtlesim1',
            executable='pub_ex',
            name='name_test'
        ),
        Node(
            package='turtlesim',
            namespace='turtlesim2',
            executable='turtlesim_node',
            name='sim'
        ),
        Node(
            package='turtlesim',
            executable='mimic',
            name='mimic',
            remappings=[
                ('/input/pose', '/turtlesim1/turtle1/pose'),
                ('/output/cmd_vel', '/turtlesim2/turtle1/cmd_vel'),
            ]
        )
    ])
