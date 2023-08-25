// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hyperdog_uros_msgs:msg/LegCmd.idl
// generated code does not contain a copyright notice

#ifndef HYPERDOG_UROS_MSGS__MSG__DETAIL__LEG_CMD__STRUCT_H_
#define HYPERDOG_UROS_MSGS__MSG__DETAIL__LEG_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'leg'
// Member 'joint'
#include "rosidl_runtime_c/string.h"

// constants for array fields with an upper bound
// leg
enum
{
  hyperdog_uros_msgs__msg__LegCmd__leg__MAX_SIZE = 2
};
// joint
enum
{
  hyperdog_uros_msgs__msg__LegCmd__joint__MAX_SIZE = 5
};

// Struct defined in msg/LegCmd in the package hyperdog_uros_msgs.
typedef struct hyperdog_uros_msgs__msg__LegCmd
{
  rosidl_runtime_c__String__Sequence leg;
  rosidl_runtime_c__String__Sequence joint;
  double position[3];
  double velocity[3];
  double stiffness[3];
  double damping[3];
} hyperdog_uros_msgs__msg__LegCmd;

// Struct for a sequence of hyperdog_uros_msgs__msg__LegCmd.
typedef struct hyperdog_uros_msgs__msg__LegCmd__Sequence
{
  hyperdog_uros_msgs__msg__LegCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hyperdog_uros_msgs__msg__LegCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HYPERDOG_UROS_MSGS__MSG__DETAIL__LEG_CMD__STRUCT_H_
