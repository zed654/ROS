from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    talker_node = Node(
        package="pub_ex",
	node_name="node_name_1",
        node_namespace="namespace_1",
        node_executable="pub_ex",
        output='screen',
	parameters=[{'pub_ex_param_1': 3},
                        {'pub_ex_param_2': 2},
                        {'pub_ex_param_array_1': [1, 0]}]
    )
    talker_node_2 = Node(
        package="pub_ex",
	node_name="node_name_2",
        node_namespace="namespace_2",
        node_executable="pub_ex",
        output='screen',
	remappings=[
                ('/ping_pong_topic', '/sub/ping_pong_topic')
            ]
    )

    ld.add_action(talker_node)
    ld.add_action(talker_node_2)

    return ld
