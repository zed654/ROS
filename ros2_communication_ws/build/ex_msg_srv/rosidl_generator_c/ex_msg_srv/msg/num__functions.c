// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ex_msg_srv:msg/Num.idl
// generated code does not contain a copyright notice
#include "ex_msg_srv/msg/num__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ex_msg_srv__msg__Num__init(ex_msg_srv__msg__Num * msg)
{
  if (!msg) {
    return false;
  }
  // num
  return true;
}

void
ex_msg_srv__msg__Num__fini(ex_msg_srv__msg__Num * msg)
{
  if (!msg) {
    return;
  }
  // num
}

ex_msg_srv__msg__Num *
ex_msg_srv__msg__Num__create()
{
  ex_msg_srv__msg__Num * msg = (ex_msg_srv__msg__Num *)malloc(sizeof(ex_msg_srv__msg__Num));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ex_msg_srv__msg__Num));
  bool success = ex_msg_srv__msg__Num__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ex_msg_srv__msg__Num__destroy(ex_msg_srv__msg__Num * msg)
{
  if (msg) {
    ex_msg_srv__msg__Num__fini(msg);
  }
  free(msg);
}


bool
ex_msg_srv__msg__Num__Sequence__init(ex_msg_srv__msg__Num__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ex_msg_srv__msg__Num * data = NULL;
  if (size) {
    data = (ex_msg_srv__msg__Num *)calloc(size, sizeof(ex_msg_srv__msg__Num));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ex_msg_srv__msg__Num__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ex_msg_srv__msg__Num__fini(&data[i - 1]);
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
ex_msg_srv__msg__Num__Sequence__fini(ex_msg_srv__msg__Num__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ex_msg_srv__msg__Num__fini(&array->data[i]);
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

ex_msg_srv__msg__Num__Sequence *
ex_msg_srv__msg__Num__Sequence__create(size_t size)
{
  ex_msg_srv__msg__Num__Sequence * array = (ex_msg_srv__msg__Num__Sequence *)malloc(sizeof(ex_msg_srv__msg__Num__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ex_msg_srv__msg__Num__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ex_msg_srv__msg__Num__Sequence__destroy(ex_msg_srv__msg__Num__Sequence * array)
{
  if (array) {
    ex_msg_srv__msg__Num__Sequence__fini(array);
  }
  free(array);
}
