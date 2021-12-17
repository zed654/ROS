// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ex_msg_srv:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef EX_MSG_SRV__MSG__NUM__TRAITS_HPP_
#define EX_MSG_SRV__MSG__NUM__TRAITS_HPP_

#include "ex_msg_srv/msg/num__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ex_msg_srv::msg::Num>()
{
  return "ex_msg_srv::msg::Num";
}

template<>
struct has_fixed_size<ex_msg_srv::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ex_msg_srv::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ex_msg_srv::msg::Num>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // EX_MSG_SRV__MSG__NUM__TRAITS_HPP_
