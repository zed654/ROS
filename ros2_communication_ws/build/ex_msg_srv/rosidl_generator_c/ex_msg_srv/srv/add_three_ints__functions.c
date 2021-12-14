// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ex_msg_srv:srv/AddThreeInts.idl
// generated code does not contain a copyright notice
#include "ex_msg_srv/srv/add_three_ints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
ex_msg_srv__srv__AddThreeInts_Request__init(ex_msg_srv__srv__AddThreeInts_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  // c
  return true;
}

void
ex_msg_srv__srv__AddThreeInts_Request__fini(ex_msg_srv__srv__AddThreeInts_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
  // c
}

ex_msg_srv__srv__AddThreeInts_Request *
ex_msg_srv__srv__AddThreeInts_Request__create()
{
  ex_msg_srv__srv__AddThreeInts_Request * msg = (ex_msg_srv__srv__AddThreeInts_Request *)malloc(sizeof(ex_msg_srv__srv__AddThreeInts_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ex_msg_srv__srv__AddThreeInts_Request));
  bool success = ex_msg_srv__srv__AddThreeInts_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ex_msg_srv__srv__AddThreeInts_Request__destroy(ex_msg_srv__srv__AddThreeInts_Request * msg)
{
  if (msg) {
    ex_msg_srv__srv__AddThreeInts_Request__fini(msg);
  }
  free(msg);
}


bool
ex_msg_srv__srv__AddThreeInts_Request__Sequence__init(ex_msg_srv__srv__AddThreeInts_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ex_msg_srv__srv__AddThreeInts_Request * data = NULL;
  if (size) {
    data = (ex_msg_srv__srv__AddThreeInts_Request *)calloc(size, sizeof(ex_msg_srv__srv__AddThreeInts_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ex_msg_srv__srv__AddThreeInts_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ex_msg_srv__srv__AddThreeInts_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ex_msg_srv__srv__AddThreeInts_Request__Sequence__fini(ex_msg_srv__srv__AddThreeInts_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ex_msg_srv__srv__AddThreeInts_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ex_msg_srv__srv__AddThreeInts_Request__Sequence *
ex_msg_srv__srv__AddThreeInts_Request__Sequence__create(size_t size)
{
  ex_msg_srv__srv__AddThreeInts_Request__Sequence * array = (ex_msg_srv__srv__AddThreeInts_Request__Sequence *)malloc(sizeof(ex_msg_srv__srv__AddThreeInts_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ex_msg_srv__srv__AddThreeInts_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ex_msg_srv__srv__AddThreeInts_Request__Sequence__destroy(ex_msg_srv__srv__AddThreeInts_Request__Sequence * array)
{
  if (array) {
    ex_msg_srv__srv__AddThreeInts_Request__Sequence__fini(array);
  }
  free(array);
}


bool
ex_msg_srv__srv__AddThreeInts_Response__init(ex_msg_srv__srv__AddThreeInts_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
ex_msg_srv__srv__AddThreeInts_Response__fini(ex_msg_srv__srv__AddThreeInts_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

ex_msg_srv__srv__AddThreeInts_Response *
ex_msg_srv__srv__AddThreeInts_Response__create()
{
  ex_msg_srv__srv__AddThreeInts_Response * msg = (ex_msg_srv__srv__AddThreeInts_Response *)malloc(sizeof(ex_msg_srv__srv__AddThreeInts_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ex_msg_srv__srv__AddThreeInts_Response));
  bool success = ex_msg_srv__srv__AddThreeInts_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ex_msg_srv__srv__AddThreeInts_Response__destroy(ex_msg_srv__srv__AddThreeInts_Response * msg)
{
  if (msg) {
    ex_msg_srv__srv__AddThreeInts_Response__fini(msg);
  }
  free(msg);
}


bool
ex_msg_srv__srv__AddThreeInts_Response__Sequence__init(ex_msg_srv__srv__AddThreeInts_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ex_msg_srv__srv__AddThreeInts_Response * data = NULL;
  if (size) {
    data = (ex_msg_srv__srv__AddThreeInts_Response *)calloc(size, sizeof(ex_msg_srv__srv__AddThreeInts_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ex_msg_srv__srv__AddThreeInts_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ex_msg_srv__srv__AddThreeInts_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ex_msg_srv__srv__AddThreeInts_Response__Sequence__fini(ex_msg_srv__srv__AddThreeInts_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ex_msg_srv__srv__AddThreeInts_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ex_msg_srv__srv__AddThreeInts_Response__Sequence *
ex_msg_srv__srv__AddThreeInts_Response__Sequence__create(size_t size)
{
  ex_msg_srv__srv__AddThreeInts_Response__Sequence * array = (ex_msg_srv__srv__AddThreeInts_Response__Sequence *)malloc(sizeof(ex_msg_srv__srv__AddThreeInts_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ex_msg_srv__srv__AddThreeInts_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ex_msg_srv__srv__AddThreeInts_Response__Sequence__destroy(ex_msg_srv__srv__AddThreeInts_Response__Sequence * array)
{
  if (array) {
    ex_msg_srv__srv__AddThreeInts_Response__Sequence__fini(array);
  }
  free(array);
}
