// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ex_msg_srv:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef EX_MSG_SRV__SRV__ADD_THREE_INTS__FUNCTIONS_H_
#define EX_MSG_SRV__SRV__ADD_THREE_INTS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "ex_msg_srv/msg/rosidl_generator_c__visibility_control.h"

#include "ex_msg_srv/srv/add_three_ints__struct.h"

/// Initialize srv/AddThreeInts message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ex_msg_srv__srv__AddThreeInts_Request
 * )) before or use
 * ex_msg_srv__srv__AddThreeInts_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_msg_srv
bool
ex_msg_srv__srv__AddThreeInts_Request__init(ex_msg_srv__srv__AddThreeInts_Request * msg);

/// Finalize srv/AddThreeInts message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_msg_srv
void
ex_msg_srv__srv__AddThreeInts_Request__fini(ex_msg_srv__srv__AddThreeInts_Request * msg);

/// Create srv/AddThreeInts message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ex_msg_srv__srv__AddThreeInts_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_msg_srv
ex_msg_srv__srv__AddThreeInts_Request *
ex_msg_srv__srv__AddThreeInts_Request__create();

/// Destroy srv/AddThreeInts message.
/**
 * It calls
 * ex_msg_srv__srv__AddThreeInts_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_msg_srv
void
ex_msg_srv__srv__AddThreeInts_Request__destroy(ex_msg_srv__srv__AddThreeInts_Request * msg);


/// Initialize array of srv/AddThreeInts messages.
/**
 * It allocates the memory for the number of elements and calls
 * ex_msg_srv__srv__AddThreeInts_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_msg_srv
bool
ex_msg_srv__srv__AddThreeInts_Request__Sequence__init(ex_msg_srv__srv__AddThreeInts_Request__Sequence * array, size_t size);

/// Finalize array of srv/AddThreeInts messages.
/**
 * It calls
 * ex_msg_srv__srv__AddThreeInts_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_msg_srv
void
ex_msg_srv__srv__AddThreeInts_Request__Sequence__fini(ex_msg_srv__srv__AddThreeInts_Request__Sequence * array);

/// Create array of srv/AddThreeInts messages.
/**
 * It allocates the memory for the array and calls
 * ex_msg_srv__srv__AddThreeInts_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_msg_srv
ex_msg_srv__srv__AddThreeInts_Request__Sequence *
ex_msg_srv__srv__AddThreeInts_Request__Sequence__create(size_t size);

/// Destroy array of srv/AddThreeInts messages.
/**
 * It calls
 * ex_msg_srv__srv__AddThreeInts_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_msg_srv
void
ex_msg_srv__srv__AddThreeInts_Request__Sequence__destroy(ex_msg_srv__srv__AddThreeInts_Request__Sequence * array);

/// Initialize srv/AddThreeInts message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ex_msg_srv__srv__AddThreeInts_Response
 * )) before or use
 * ex_msg_srv__srv__AddThreeInts_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_msg_srv
bool
ex_msg_srv__srv__AddThreeInts_Response__init(ex_msg_srv__srv__AddThreeInts_Response * msg);

/// Finalize srv/AddThreeInts message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_msg_srv
void
ex_msg_srv__srv__AddThreeInts_Response__fini(ex_msg_srv__srv__AddThreeInts_Response * msg);

/// Create srv/AddThreeInts message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ex_msg_srv__srv__AddThreeInts_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_msg_srv
ex_msg_srv__srv__AddThreeInts_Response *
ex_msg_srv__srv__AddThreeInts_Response__create();

/// Destroy srv/AddThreeInts message.
/**
 * It calls
 * ex_msg_srv__srv__AddThreeInts_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_msg_srv
void
ex_msg_srv__srv__AddThreeInts_Response__destroy(ex_msg_srv__srv__AddThreeInts_Response * msg);


/// Initialize array of srv/AddThreeInts messages.
/**
 * It allocates the memory for the number of elements and calls
 * ex_msg_srv__srv__AddThreeInts_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_msg_srv
bool
ex_msg_srv__srv__AddThreeInts_Response__Sequence__init(ex_msg_srv__srv__AddThreeInts_Response__Sequence * array, size_t size);

/// Finalize array of srv/AddThreeInts messages.
/**
 * It calls
 * ex_msg_srv__srv__AddThreeInts_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_msg_srv
void
ex_msg_srv__srv__AddThreeInts_Response__Sequence__fini(ex_msg_srv__srv__AddThreeInts_Response__Sequence * array);

/// Create array of srv/AddThreeInts messages.
/**
 * It allocates the memory for the array and calls
 * ex_msg_srv__srv__AddThreeInts_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_msg_srv
ex_msg_srv__srv__AddThreeInts_Response__Sequence *
ex_msg_srv__srv__AddThreeInts_Response__Sequence__create(size_t size);

/// Destroy array of srv/AddThreeInts messages.
/**
 * It calls
 * ex_msg_srv__srv__AddThreeInts_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ex_msg_srv
void
ex_msg_srv__srv__AddThreeInts_Response__Sequence__destroy(ex_msg_srv__srv__AddThreeInts_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // EX_MSG_SRV__SRV__ADD_THREE_INTS__FUNCTIONS_H_
