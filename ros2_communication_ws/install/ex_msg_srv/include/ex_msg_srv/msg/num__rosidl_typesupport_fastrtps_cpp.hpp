// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from ex_msg_srv:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef EX_MSG_SRV__MSG__NUM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define EX_MSG_SRV__MSG__NUM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ex_msg_srv/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "ex_msg_srv/msg/num__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace ex_msg_srv
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ex_msg_srv
cdr_serialize(
  const ex_msg_srv::msg::Num & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ex_msg_srv
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ex_msg_srv::msg::Num & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ex_msg_srv
get_serialized_size(
  const ex_msg_srv::msg::Num & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ex_msg_srv
max_serialized_size_Num(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ex_msg_srv

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ex_msg_srv
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ex_msg_srv, msg, Num)();

#ifdef __cplusplus
}
#endif

#endif  // EX_MSG_SRV__MSG__NUM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
