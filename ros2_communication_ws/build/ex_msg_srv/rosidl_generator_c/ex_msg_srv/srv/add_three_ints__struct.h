// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ex_msg_srv:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef EX_MSG_SRV__SRV__ADD_THREE_INTS__STRUCT_H_
#define EX_MSG_SRV__SRV__ADD_THREE_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/AddThreeInts in the package ex_msg_srv.
typedef struct ex_msg_srv__srv__AddThreeInts_Request
{
  int64_t a;
  int64_t b;
  int64_t c;
} ex_msg_srv__srv__AddThreeInts_Request;

// Struct for a sequence of ex_msg_srv__srv__AddThreeInts_Request.
typedef struct ex_msg_srv__srv__AddThreeInts_Request__Sequence
{
  ex_msg_srv__srv__AddThreeInts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ex_msg_srv__srv__AddThreeInts_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/AddThreeInts in the package ex_msg_srv.
typedef struct ex_msg_srv__srv__AddThreeInts_Response
{
  int64_t sum;
} ex_msg_srv__srv__AddThreeInts_Response;

// Struct for a sequence of ex_msg_srv__srv__AddThreeInts_Response.
typedef struct ex_msg_srv__srv__AddThreeInts_Response__Sequence
{
  ex_msg_srv__srv__AddThreeInts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ex_msg_srv__srv__AddThreeInts_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EX_MSG_SRV__SRV__ADD_THREE_INTS__STRUCT_H_
