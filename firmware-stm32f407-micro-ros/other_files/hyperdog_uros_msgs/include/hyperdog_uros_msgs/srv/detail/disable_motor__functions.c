// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hyperdog_uros_msgs:srv/DisableMotor.idl
// generated code does not contain a copyright notice
#include "hyperdog_uros_msgs/srv/detail/disable_motor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `leg`
// Member `joint`
#include "rosidl_runtime_c/string_functions.h"

bool
hyperdog_uros_msgs__srv__DisableMotor_Request__init(hyperdog_uros_msgs__srv__DisableMotor_Request * msg)
{
  if (!msg) {
    return false;
  }
  // leg
  if (!rosidl_runtime_c__String__init(&msg->leg)) {
    hyperdog_uros_msgs__srv__DisableMotor_Request__fini(msg);
    return false;
  }
  // joint
  if (!rosidl_runtime_c__String__init(&msg->joint)) {
    hyperdog_uros_msgs__srv__DisableMotor_Request__fini(msg);
    return false;
  }
  return true;
}

void
hyperdog_uros_msgs__srv__DisableMotor_Request__fini(hyperdog_uros_msgs__srv__DisableMotor_Request * msg)
{
  if (!msg) {
    return;
  }
  // leg
  rosidl_runtime_c__String__fini(&msg->leg);
  // joint
  rosidl_runtime_c__String__fini(&msg->joint);
}

bool
hyperdog_uros_msgs__srv__DisableMotor_Request__are_equal(const hyperdog_uros_msgs__srv__DisableMotor_Request * lhs, const hyperdog_uros_msgs__srv__DisableMotor_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // leg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->leg), &(rhs->leg)))
  {
    return false;
  }
  // joint
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->joint), &(rhs->joint)))
  {
    return false;
  }
  return true;
}

bool
hyperdog_uros_msgs__srv__DisableMotor_Request__copy(
  const hyperdog_uros_msgs__srv__DisableMotor_Request * input,
  hyperdog_uros_msgs__srv__DisableMotor_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // leg
  if (!rosidl_runtime_c__String__copy(
      &(input->leg), &(output->leg)))
  {
    return false;
  }
  // joint
  if (!rosidl_runtime_c__String__copy(
      &(input->joint), &(output->joint)))
  {
    return false;
  }
  return true;
}

hyperdog_uros_msgs__srv__DisableMotor_Request *
hyperdog_uros_msgs__srv__DisableMotor_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hyperdog_uros_msgs__srv__DisableMotor_Request * msg = (hyperdog_uros_msgs__srv__DisableMotor_Request *)allocator.allocate(sizeof(hyperdog_uros_msgs__srv__DisableMotor_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hyperdog_uros_msgs__srv__DisableMotor_Request));
  bool success = hyperdog_uros_msgs__srv__DisableMotor_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hyperdog_uros_msgs__srv__DisableMotor_Request__destroy(hyperdog_uros_msgs__srv__DisableMotor_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hyperdog_uros_msgs__srv__DisableMotor_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hyperdog_uros_msgs__srv__DisableMotor_Request__Sequence__init(hyperdog_uros_msgs__srv__DisableMotor_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hyperdog_uros_msgs__srv__DisableMotor_Request * data = NULL;

  if (size) {
    data = (hyperdog_uros_msgs__srv__DisableMotor_Request *)allocator.zero_allocate(size, sizeof(hyperdog_uros_msgs__srv__DisableMotor_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hyperdog_uros_msgs__srv__DisableMotor_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hyperdog_uros_msgs__srv__DisableMotor_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
hyperdog_uros_msgs__srv__DisableMotor_Request__Sequence__fini(hyperdog_uros_msgs__srv__DisableMotor_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hyperdog_uros_msgs__srv__DisableMotor_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

hyperdog_uros_msgs__srv__DisableMotor_Request__Sequence *
hyperdog_uros_msgs__srv__DisableMotor_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hyperdog_uros_msgs__srv__DisableMotor_Request__Sequence * array = (hyperdog_uros_msgs__srv__DisableMotor_Request__Sequence *)allocator.allocate(sizeof(hyperdog_uros_msgs__srv__DisableMotor_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hyperdog_uros_msgs__srv__DisableMotor_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hyperdog_uros_msgs__srv__DisableMotor_Request__Sequence__destroy(hyperdog_uros_msgs__srv__DisableMotor_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hyperdog_uros_msgs__srv__DisableMotor_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hyperdog_uros_msgs__srv__DisableMotor_Request__Sequence__are_equal(const hyperdog_uros_msgs__srv__DisableMotor_Request__Sequence * lhs, const hyperdog_uros_msgs__srv__DisableMotor_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hyperdog_uros_msgs__srv__DisableMotor_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hyperdog_uros_msgs__srv__DisableMotor_Request__Sequence__copy(
  const hyperdog_uros_msgs__srv__DisableMotor_Request__Sequence * input,
  hyperdog_uros_msgs__srv__DisableMotor_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hyperdog_uros_msgs__srv__DisableMotor_Request);
    hyperdog_uros_msgs__srv__DisableMotor_Request * data =
      (hyperdog_uros_msgs__srv__DisableMotor_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hyperdog_uros_msgs__srv__DisableMotor_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          hyperdog_uros_msgs__srv__DisableMotor_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hyperdog_uros_msgs__srv__DisableMotor_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `error_msg`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
hyperdog_uros_msgs__srv__DisableMotor_Response__init(hyperdog_uros_msgs__srv__DisableMotor_Response * msg)
{
  if (!msg) {
    return false;
  }
  // is_disabled
  // error_msg
  if (!rosidl_runtime_c__String__init(&msg->error_msg)) {
    hyperdog_uros_msgs__srv__DisableMotor_Response__fini(msg);
    return false;
  }
  return true;
}

void
hyperdog_uros_msgs__srv__DisableMotor_Response__fini(hyperdog_uros_msgs__srv__DisableMotor_Response * msg)
{
  if (!msg) {
    return;
  }
  // is_disabled
  // error_msg
  rosidl_runtime_c__String__fini(&msg->error_msg);
}

bool
hyperdog_uros_msgs__srv__DisableMotor_Response__are_equal(const hyperdog_uros_msgs__srv__DisableMotor_Response * lhs, const hyperdog_uros_msgs__srv__DisableMotor_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_disabled
  if (lhs->is_disabled != rhs->is_disabled) {
    return false;
  }
  // error_msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_msg), &(rhs->error_msg)))
  {
    return false;
  }
  return true;
}

bool
hyperdog_uros_msgs__srv__DisableMotor_Response__copy(
  const hyperdog_uros_msgs__srv__DisableMotor_Response * input,
  hyperdog_uros_msgs__srv__DisableMotor_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // is_disabled
  output->is_disabled = input->is_disabled;
  // error_msg
  if (!rosidl_runtime_c__String__copy(
      &(input->error_msg), &(output->error_msg)))
  {
    return false;
  }
  return true;
}

hyperdog_uros_msgs__srv__DisableMotor_Response *
hyperdog_uros_msgs__srv__DisableMotor_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hyperdog_uros_msgs__srv__DisableMotor_Response * msg = (hyperdog_uros_msgs__srv__DisableMotor_Response *)allocator.allocate(sizeof(hyperdog_uros_msgs__srv__DisableMotor_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hyperdog_uros_msgs__srv__DisableMotor_Response));
  bool success = hyperdog_uros_msgs__srv__DisableMotor_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hyperdog_uros_msgs__srv__DisableMotor_Response__destroy(hyperdog_uros_msgs__srv__DisableMotor_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hyperdog_uros_msgs__srv__DisableMotor_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hyperdog_uros_msgs__srv__DisableMotor_Response__Sequence__init(hyperdog_uros_msgs__srv__DisableMotor_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hyperdog_uros_msgs__srv__DisableMotor_Response * data = NULL;

  if (size) {
    data = (hyperdog_uros_msgs__srv__DisableMotor_Response *)allocator.zero_allocate(size, sizeof(hyperdog_uros_msgs__srv__DisableMotor_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hyperdog_uros_msgs__srv__DisableMotor_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hyperdog_uros_msgs__srv__DisableMotor_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
hyperdog_uros_msgs__srv__DisableMotor_Response__Sequence__fini(hyperdog_uros_msgs__srv__DisableMotor_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      hyperdog_uros_msgs__srv__DisableMotor_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

hyperdog_uros_msgs__srv__DisableMotor_Response__Sequence *
hyperdog_uros_msgs__srv__DisableMotor_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hyperdog_uros_msgs__srv__DisableMotor_Response__Sequence * array = (hyperdog_uros_msgs__srv__DisableMotor_Response__Sequence *)allocator.allocate(sizeof(hyperdog_uros_msgs__srv__DisableMotor_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hyperdog_uros_msgs__srv__DisableMotor_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hyperdog_uros_msgs__srv__DisableMotor_Response__Sequence__destroy(hyperdog_uros_msgs__srv__DisableMotor_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hyperdog_uros_msgs__srv__DisableMotor_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hyperdog_uros_msgs__srv__DisableMotor_Response__Sequence__are_equal(const hyperdog_uros_msgs__srv__DisableMotor_Response__Sequence * lhs, const hyperdog_uros_msgs__srv__DisableMotor_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hyperdog_uros_msgs__srv__DisableMotor_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hyperdog_uros_msgs__srv__DisableMotor_Response__Sequence__copy(
  const hyperdog_uros_msgs__srv__DisableMotor_Response__Sequence * input,
  hyperdog_uros_msgs__srv__DisableMotor_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hyperdog_uros_msgs__srv__DisableMotor_Response);
    hyperdog_uros_msgs__srv__DisableMotor_Response * data =
      (hyperdog_uros_msgs__srv__DisableMotor_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hyperdog_uros_msgs__srv__DisableMotor_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          hyperdog_uros_msgs__srv__DisableMotor_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hyperdog_uros_msgs__srv__DisableMotor_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
