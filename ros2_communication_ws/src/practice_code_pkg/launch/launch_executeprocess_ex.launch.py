from launch import LaunchDescription
from launch.actions import ExecuteProcess

def generate_launch_description():
    test_param = 3
    return LaunchDescription(
	[
        ExecuteProcess(
            cmd=["ros2", "run", "pub_ex", "pub_ex"],
	    output="screen"
        ),
        ExecuteProcess(
            cmd=["ros2", "run", "sub_ex", "sub_ex"],
	    output="screen"
        )
   	]
)


