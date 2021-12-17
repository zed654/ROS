// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ex_msg_srv:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef EX_MSG_SRV__MSG__NUM__STRUCT_H_
#define EX_MSG_SRV__MSG__NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Num in the package ex_msg_srv.
typedef struct ex_msg_srv__msg__Num
{
  int64_t num;
} ex_msg_srv__msg__Num;

// Struct for a sequence of ex_msg_srv__msg__Num.
typedef struct ex_msg_srv__msg__Num__Sequence
{
  ex_msg_srv__msg__Num * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ex_msg_srv__msg__Num__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EX_MSG_SRV__MSG__NUM__STRUCT_H_
