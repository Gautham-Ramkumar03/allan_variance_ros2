// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from allan_variance_msgs:msg/Imu9DoF.idl
// generated code does not contain a copyright notice

#ifndef ALLAN_VARIANCE_MSGS__MSG__DETAIL__IMU9_DO_F__FUNCTIONS_H_
#define ALLAN_VARIANCE_MSGS__MSG__DETAIL__IMU9_DO_F__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "allan_variance_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "allan_variance_msgs/msg/detail/imu9_do_f__struct.h"

/// Initialize msg/Imu9DoF message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * allan_variance_msgs__msg__Imu9DoF
 * )) before or use
 * allan_variance_msgs__msg__Imu9DoF__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_allan_variance_msgs
bool
allan_variance_msgs__msg__Imu9DoF__init(allan_variance_msgs__msg__Imu9DoF * msg);

/// Finalize msg/Imu9DoF message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_allan_variance_msgs
void
allan_variance_msgs__msg__Imu9DoF__fini(allan_variance_msgs__msg__Imu9DoF * msg);

/// Create msg/Imu9DoF message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * allan_variance_msgs__msg__Imu9DoF__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_allan_variance_msgs
allan_variance_msgs__msg__Imu9DoF *
allan_variance_msgs__msg__Imu9DoF__create();

/// Destroy msg/Imu9DoF message.
/**
 * It calls
 * allan_variance_msgs__msg__Imu9DoF__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_allan_variance_msgs
void
allan_variance_msgs__msg__Imu9DoF__destroy(allan_variance_msgs__msg__Imu9DoF * msg);

/// Check for msg/Imu9DoF message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_allan_variance_msgs
bool
allan_variance_msgs__msg__Imu9DoF__are_equal(const allan_variance_msgs__msg__Imu9DoF * lhs, const allan_variance_msgs__msg__Imu9DoF * rhs);

/// Copy a msg/Imu9DoF message.
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
ROSIDL_GENERATOR_C_PUBLIC_allan_variance_msgs
bool
allan_variance_msgs__msg__Imu9DoF__copy(
  const allan_variance_msgs__msg__Imu9DoF * input,
  allan_variance_msgs__msg__Imu9DoF * output);

/// Initialize array of msg/Imu9DoF messages.
/**
 * It allocates the memory for the number of elements and calls
 * allan_variance_msgs__msg__Imu9DoF__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_allan_variance_msgs
bool
allan_variance_msgs__msg__Imu9DoF__Sequence__init(allan_variance_msgs__msg__Imu9DoF__Sequence * array, size_t size);

/// Finalize array of msg/Imu9DoF messages.
/**
 * It calls
 * allan_variance_msgs__msg__Imu9DoF__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_allan_variance_msgs
void
allan_variance_msgs__msg__Imu9DoF__Sequence__fini(allan_variance_msgs__msg__Imu9DoF__Sequence * array);

/// Create array of msg/Imu9DoF messages.
/**
 * It allocates the memory for the array and calls
 * allan_variance_msgs__msg__Imu9DoF__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_allan_variance_msgs
allan_variance_msgs__msg__Imu9DoF__Sequence *
allan_variance_msgs__msg__Imu9DoF__Sequence__create(size_t size);

/// Destroy array of msg/Imu9DoF messages.
/**
 * It calls
 * allan_variance_msgs__msg__Imu9DoF__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_allan_variance_msgs
void
allan_variance_msgs__msg__Imu9DoF__Sequence__destroy(allan_variance_msgs__msg__Imu9DoF__Sequence * array);

/// Check for msg/Imu9DoF message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_allan_variance_msgs
bool
allan_variance_msgs__msg__Imu9DoF__Sequence__are_equal(const allan_variance_msgs__msg__Imu9DoF__Sequence * lhs, const allan_variance_msgs__msg__Imu9DoF__Sequence * rhs);

/// Copy an array of msg/Imu9DoF messages.
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
ROSIDL_GENERATOR_C_PUBLIC_allan_variance_msgs
bool
allan_variance_msgs__msg__Imu9DoF__Sequence__copy(
  const allan_variance_msgs__msg__Imu9DoF__Sequence * input,
  allan_variance_msgs__msg__Imu9DoF__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ALLAN_VARIANCE_MSGS__MSG__DETAIL__IMU9_DO_F__FUNCTIONS_H_
