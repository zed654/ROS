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
	emulate_tty=True,
        parameters=[
                {"param_1": "earth"},
		{"param_2": 7.223}
            ]
    )
    talker_node_2 = Node(
        package="pub_ex",
	node_name="node_name_2",
        node_namespace="namespace_2",
        node_executable="pub_ex",
        output='screen',
	emulate_tty=True,
	remappings=[
                ('/ping_pong_topic', '/sub/ping_pong_topic')
            ],
        parameters=[
                {"param_1": "Moon"},
		{"param_2": 3.141592}
            ]
    )

    ld.add_action(talker_node)
    ld.add_action(talker_node_2)

    return ld
