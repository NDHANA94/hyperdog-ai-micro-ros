// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hyperdog_uros_msgs:msg/LegCmd.idl
// generated code does not contain a copyright notice
#include "hyperdog_uros_msgs/msg/detail/leg_cmd__functions.h"

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
hyperdog_uros_msgs__msg__LegCmd__init(hyperdog_uros_msgs__msg__LegCmd * msg)
{
  if (!msg) {
    return false;
  }
  // leg
  if (!rosidl_runtime_c__String__Sequence__init(&msg->leg, 0)) {
    hyperdog_uros_msgs__msg__LegCmd__fini(msg);
    return false;
  }
  // joint
  if (!rosidl_runtime_c__String__Sequence__init(&msg->joint, 0)) {
    hyperdog_uros_msgs__msg__LegCmd__fini(msg);
    return false;
  }
  // position
  // velocity
  // stiffness
  // damping
  return true;
}

void
hyperdog_uros_msgs__msg__LegCmd__fini(hyperdog_uros_msgs__msg__LegCmd * msg)
{
  if (!msg) {
    return;
  }
  // leg
  rosidl_runtime_c__String__Sequence__fini(&msg->leg);
  // joint
  rosidl_runtime_c__String__Sequence__fini(&msg->joint);
  // position
  // velocity
  // stiffness
  // damping
}

bool
hyperdog_uros_msgs__msg__LegCmd__are_equal(const hyperdog_uros_msgs__msg__LegCmd * lhs, const hyperdog_uros_msgs__msg__LegCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // leg
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->leg), &(rhs->leg)))
  {
    return false;
  }
  // joint
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->joint), &(rhs->joint)))
  {
    return false;
  }
  // position
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->position[i] != rhs->position[i]) {
      return false;
    }
  }
  // velocity
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->velocity[i] != rhs->velocity[i]) {
      return false;
    }
  }
  // stiffness
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->stiffness[i] != rhs->stiffness[i]) {
      return false;
    }
  }
  // damping
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->damping[i] != rhs->damping[i]) {
      return false;
    }
  }
  return true;
}

bool
hyperdog_uros_msgs__msg__LegCmd__copy(
  const hyperdog_uros_msgs__msg__LegCmd * input,
  hyperdog_uros_msgs__msg__LegCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // leg
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->leg), &(output->leg)))
  {
    return false;
  }
  // joint
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->joint), &(output->joint)))
  {
    return false;
  }
  // position
  for (size_t i = 0; i < 3; ++i) {
    output->position[i] = input->position[i];
  }
  // velocity
  for (size_t i = 0; i < 3; ++i) {
    output->velocity[i] = input->velocity[i];
  }
  // stiffness
  for (size_t i = 0; i < 3; ++i) {
    output->stiffness[i] = input->stiffness[i];
  }
  // damping
  for (size_t i = 0; i < 3; ++i) {
    output->damping[i] = input->damping[i];
  }
  return true;
}

hyperdog_uros_msgs__msg__LegCmd *
hyperdog_uros_msgs__msg__LegCmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hyperdog_uros_msgs__msg__LegCmd * msg = (hyperdog_uros_msgs__msg__LegCmd *)allocator.allocate(sizeof(hyperdog_uros_msgs__msg__LegCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hyperdog_uros_msgs__msg__LegCmd));
  bool success = hyperdog_uros_msgs__msg__LegCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hyperdog_uros_msgs__msg__LegCmd__destroy(hyperdog_uros_msgs__msg__LegCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hyperdog_uros_msgs__msg__LegCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hyperdog_uros_msgs__msg__LegCmd__Sequence__init(hyperdog_uros_msgs__msg__LegCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hyperdog_uros_msgs__msg__LegCmd * data = NULL;

  if (size) {
    data = (hyperdog_uros_msgs__msg__LegCmd *)allocator.zero_allocate(size, sizeof(hyperdog_uros_msgs__msg__LegCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hyperdog_uros_msgs__msg__LegCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hyperdog_uros_msgs__msg__LegCmd__fini(&data[i - 1]);
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
hyperdog_uros_msgs__msg__LegCmd__Sequence__fini(hyperdog_uros_msgs__msg__LegCmd__Sequence * array)
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
      hyperdog_uros_msgs__msg__LegCmd__fini(&array->data[i]);
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

hyperdog_uros_msgs__msg__LegCmd__Sequence *
hyperdog_uros_msgs__msg__LegCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hyperdog_uros_msgs__msg__LegCmd__Sequence * array = (hyperdog_uros_msgs__msg__LegCmd__Sequence *)allocator.allocate(sizeof(hyperdog_uros_msgs__msg__LegCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hyperdog_uros_msgs__msg__LegCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hyperdog_uros_msgs__msg__LegCmd__Sequence__destroy(hyperdog_uros_msgs__msg__LegCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hyperdog_uros_msgs__msg__LegCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hyperdog_uros_msgs__msg__LegCmd__Sequence__are_equal(const hyperdog_uros_msgs__msg__LegCmd__Sequence * lhs, const hyperdog_uros_msgs__msg__LegCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hyperdog_uros_msgs__msg__LegCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hyperdog_uros_msgs__msg__LegCmd__Sequence__copy(
  const hyperdog_uros_msgs__msg__LegCmd__Sequence * input,
  hyperdog_uros_msgs__msg__LegCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hyperdog_uros_msgs__msg__LegCmd);
    hyperdog_uros_msgs__msg__LegCmd * data =
      (hyperdog_uros_msgs__msg__LegCmd *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hyperdog_uros_msgs__msg__LegCmd__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          hyperdog_uros_msgs__msg__LegCmd__fini(&data[i]);
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
    if (!hyperdog_uros_msgs__msg__LegCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
