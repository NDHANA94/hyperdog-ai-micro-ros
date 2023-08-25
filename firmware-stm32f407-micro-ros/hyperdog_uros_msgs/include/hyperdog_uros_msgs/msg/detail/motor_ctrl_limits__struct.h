// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hyperdog_uros_msgs:msg/MotorCtrlLimits.idl
// generated code does not contain a copyright notice

#ifndef HYPERDOG_UROS_MSGS__MSG__DETAIL__MOTOR_CTRL_LIMITS__STRUCT_H_
#define HYPERDOG_UROS_MSGS__MSG__DETAIL__MOTOR_CTRL_LIMITS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/MotorCtrlLimits in the package hyperdog_uros_msgs.
typedef struct hyperdog_uros_msgs__msg__MotorCtrlLimits
{
  double position[2];
  double velocity[2];
  double current[2];
} hyperdog_uros_msgs__msg__MotorCtrlLimits;

// Struct for a sequence of hyperdog_uros_msgs__msg__MotorCtrlLimits.
typedef struct hyperdog_uros_msgs__msg__MotorCtrlLimits__Sequence
{
  hyperdog_uros_msgs__msg__MotorCtrlLimits * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hyperdog_uros_msgs__msg__MotorCtrlLimits__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HYPERDOG_UROS_MSGS__MSG__DETAIL__MOTOR_CTRL_LIMITS__STRUCT_H_
