// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ex_msg_srv:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef EX_MSG_SRV__MSG__NUM__FUNCTIONS_H_
#define EX_MSG_SRV__MSG__NUM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "ex_msg_srv/msg/rosidl_generator_c__visibility_control.h"

#include "ex_msg_srv/msg/num__struct.h"

/// Initialize msg/Num message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ex_msg_srv__msg__Num
 * )) before or use
 * ex_msg_srv__msg__Num__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_msg_srv
bool
ex_msg_srv__msg__Num__init(ex_msg_srv__msg__Num * msg);

/// Finalize msg/Num message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_msg_srv
void
ex_msg_srv__msg__Num__fini(ex_msg_srv__msg__Num * msg);

/// Create msg/Num message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ex_msg_srv__msg__Num__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_msg_srv
ex_msg_srv__msg__Num *
ex_msg_srv__msg__Num__create();

/// Destroy msg/Num message.
/**
 * It calls
 * ex_msg_srv__msg__Num__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_msg_srv
void
ex_msg_srv__msg__Num__destroy(ex_msg_srv__msg__Num * msg);


/// Initialize array of msg/Num messages.
/**
 * It allocates the memory for the number of elements and calls
 * ex_msg_srv__msg__Num__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_msg_srv
bool
ex_msg_srv__msg__Num__Sequence__init(ex_msg_srv__msg__Num__Sequence * array, size_t size);

/// Finalize array of msg/Num messages.
/**
 * It calls
 * ex_msg_srv__msg__Num__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_msg_srv
void
ex_msg_srv__msg__Num__Sequence__fini(ex_msg_srv__msg__Num__Sequence * array);

/// Create array of msg/Num messages.
/**
 * It allocates the memory for the array and calls
 * ex_msg_srv__msg__Num__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_msg_srv
ex_msg_srv__msg__Num__Sequence *
ex_msg_srv__msg__Num__Sequence__create(size_t size);

/// Destroy array of msg/Num messages.
/**
 * It calls
 * ex_msg_srv__msg__Num__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_msg_srv
void
ex_msg_srv__msg__Num__Sequence__destroy(ex_msg_srv__msg__Num__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // EX_MSG_SRV__MSG__NUM__FUNCTIONS_H_
