from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package="pub_ex",			# ROS Pkg name
            node_executable="pub_ex",		# ROS exe name
            node_name="node_name_1",		# main Node Name
            node_namespace="namespace_1",	# Sub Node Name. If you wanna change param, you should write like that 'ros2 param set /namespace_1/node_name_1 param_1'
            
	   # To print values on terminal, you should write below two lines,'output="screen", emulate_tty=True'
	    output="screen",	
            emulate_tty=True,

	    # The working method of parameters is not same to ROS1. You should write this parameters on C Code as the name of 'decleare_parameter<TYPE>("param_1", <DEFAULT_VALUE>)
            parameters=[
                {"param_1": "earth"},
		{"param_2": 7.223}
            ]
        )
    ])
