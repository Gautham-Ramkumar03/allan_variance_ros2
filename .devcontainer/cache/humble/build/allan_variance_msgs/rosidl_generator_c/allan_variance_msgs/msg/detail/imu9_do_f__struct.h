// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from allan_variance_msgs:msg/Imu9DoF.idl
// generated code does not contain a copyright notice

#ifndef ALLAN_VARIANCE_MSGS__MSG__DETAIL__IMU9_DO_F__STRUCT_H_
#define ALLAN_VARIANCE_MSGS__MSG__DETAIL__IMU9_DO_F__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'angular_velocity'
// Member 'linear_acceleration'
// Member 'magnetic_field'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/Imu9DoF in the package allan_variance_msgs.
typedef struct allan_variance_msgs__msg__Imu9DoF
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Vector3 angular_velocity;
  geometry_msgs__msg__Vector3 linear_acceleration;
  geometry_msgs__msg__Vector3 magnetic_field;
  bool magnetic_data_updated;
} allan_variance_msgs__msg__Imu9DoF;

// Struct for a sequence of allan_variance_msgs__msg__Imu9DoF.
typedef struct allan_variance_msgs__msg__Imu9DoF__Sequence
{
  allan_variance_msgs__msg__Imu9DoF * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} allan_variance_msgs__msg__Imu9DoF__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ALLAN_VARIANCE_MSGS__MSG__DETAIL__IMU9_DO_F__STRUCT_H_
