// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from hyperdog_uros_msgs:msg/Limit.idl
// generated code does not contain a copyright notice

#ifndef HYPERDOG_UROS_MSGS__MSG__DETAIL__LIMIT__FUNCTIONS_H_
#define HYPERDOG_UROS_MSGS__MSG__DETAIL__LIMIT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "hyperdog_uros_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "hyperdog_uros_msgs/msg/detail/limit__struct.h"

/// Initialize msg/Limit message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * hyperdog_uros_msgs__msg__Limit
 * )) before or use
 * hyperdog_uros_msgs__msg__Limit__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_hyperdog_uros_msgs
bool
hyperdog_uros_msgs__msg__Limit__init(hyperdog_uros_msgs__msg__Limit * msg);

/// Finalize msg/Limit message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hyperdog_uros_msgs
void
hyperdog_uros_msgs__msg__Limit__fini(hyperdog_uros_msgs__msg__Limit * msg);

/// Create msg/Limit message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * hyperdog_uros_msgs__msg__Limit__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hyperdog_uros_msgs
hyperdog_uros_msgs__msg__Limit *
hyperdog_uros_msgs__msg__Limit__create();

/// Destroy msg/Limit message.
/**
 * It calls
 * hyperdog_uros_msgs__msg__Limit__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hyperdog_uros_msgs
void
hyperdog_uros_msgs__msg__Limit__destroy(hyperdog_uros_msgs__msg__Limit * msg);

/// Check for msg/Limit message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hyperdog_uros_msgs
bool
hyperdog_uros_msgs__msg__Limit__are_equal(const hyperdog_uros_msgs__msg__Limit * lhs, const hyperdog_uros_msgs__msg__Limit * rhs);

/// Copy a msg/Limit message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hyperdog_uros_msgs
bool
hyperdog_uros_msgs__msg__Limit__copy(
  const hyperdog_uros_msgs__msg__Limit * input,
  hyperdog_uros_msgs__msg__Limit * output);

/// Initialize array of msg/Limit messages.
/**
 * It allocates the memory for the number of elements and calls
 * hyperdog_uros_msgs__msg__Limit__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_hyperdog_uros_msgs
bool
hyperdog_uros_msgs__msg__Limit__Sequence__init(hyperdog_uros_msgs__msg__Limit__Sequence * array, size_t size);

/// Finalize array of msg/Limit messages.
/**
 * It calls
 * hyperdog_uros_msgs__msg__Limit__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hyperdog_uros_msgs
void
hyperdog_uros_msgs__msg__Limit__Sequence__fini(hyperdog_uros_msgs__msg__Limit__Sequence * array);

/// Create array of msg/Limit messages.
/**
 * It allocates the memory for the array and calls
 * hyperdog_uros_msgs__msg__Limit__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_hyperdog_uros_msgs
hyperdog_uros_msgs__msg__Limit__Sequence *
hyperdog_uros_msgs__msg__Limit__Sequence__create(size_t size);

/// Destroy array of msg/Limit messages.
/**
 * It calls
 * hyperdog_uros_msgs__msg__Limit__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_hyperdog_uros_msgs
void
hyperdog_uros_msgs__msg__Limit__Sequence__destroy(hyperdog_uros_msgs__msg__Limit__Sequence * array);

/// Check for msg/Limit message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_hyperdog_uros_msgs
bool
hyperdog_uros_msgs__msg__Limit__Sequence__are_equal(const hyperdog_uros_msgs__msg__Limit__Sequence * lhs, const hyperdog_uros_msgs__msg__Limit__Sequence * rhs);

/// Copy an array of msg/Limit messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_hyperdog_uros_msgs
bool
hyperdog_uros_msgs__msg__Limit__Sequence__copy(
  const hyperdog_uros_msgs__msg__Limit__Sequence * input,
  hyperdog_uros_msgs__msg__Limit__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // HYPERDOG_UROS_MSGS__MSG__DETAIL__LIMIT__FUNCTIONS_H_
