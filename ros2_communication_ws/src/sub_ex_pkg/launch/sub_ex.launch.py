from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package="sub_ex",			# ROS Pkg name
            node_executable="sub_ex",		# ROS exe name
            
	   # To print values on terminal, you should write below two lines,'output="screen", emulate_tty=True'
	    output="screen",	
            emulate_tty=True
        )
    ])
