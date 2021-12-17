// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ex_msg_srv:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef EX_MSG_SRV__SRV__ADD_THREE_INTS__TRAITS_HPP_
#define EX_MSG_SRV__SRV__ADD_THREE_INTS__TRAITS_HPP_

#include "ex_msg_srv/srv/add_three_ints__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ex_msg_srv::srv::AddThreeInts_Request>()
{
  return "ex_msg_srv::srv::AddThreeInts_Request";
}

template<>
struct has_fixed_size<ex_msg_srv::srv::AddThreeInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ex_msg_srv::srv::AddThreeInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ex_msg_srv::srv::AddThreeInts_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ex_msg_srv::srv::AddThreeInts_Response>()
{
  return "ex_msg_srv::srv::AddThreeInts_Response";
}

template<>
struct has_fixed_size<ex_msg_srv::srv::AddThreeInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ex_msg_srv::srv::AddThreeInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ex_msg_srv::srv::AddThreeInts_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ex_msg_srv::srv::AddThreeInts>()
{
  return "ex_msg_srv::srv::AddThreeInts";
}

template<>
struct has_fixed_size<ex_msg_srv::srv::AddThreeInts>
  : std::integral_constant<
    bool,
    has_fixed_size<ex_msg_srv::srv::AddThreeInts_Request>::value &&
    has_fixed_size<ex_msg_srv::srv::AddThreeInts_Response>::value
  >
{
};

template<>
struct has_bounded_size<ex_msg_srv::srv::AddThreeInts>
  : std::integral_constant<
    bool,
    has_bounded_size<ex_msg_srv::srv::AddThreeInts_Request>::value &&
    has_bounded_size<ex_msg_srv::srv::AddThreeInts_Response>::value
  >
{
};

template<>
struct is_service<ex_msg_srv::srv::AddThreeInts>
  : std::true_type
{
};

template<>
struct is_service_request<ex_msg_srv::srv::AddThreeInts_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ex_msg_srv::srv::AddThreeInts_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // EX_MSG_SRV__SRV__ADD_THREE_INTS__TRAITS_HPP_
