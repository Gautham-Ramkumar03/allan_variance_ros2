// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from allan_variance_msgs:msg/Imu9DoF.idl
// generated code does not contain a copyright notice
#include "allan_variance_msgs/msg/detail/imu9_do_f__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `angular_velocity`
// Member `linear_acceleration`
// Member `magnetic_field`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
allan_variance_msgs__msg__Imu9DoF__init(allan_variance_msgs__msg__Imu9DoF * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    allan_variance_msgs__msg__Imu9DoF__fini(msg);
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->angular_velocity)) {
    allan_variance_msgs__msg__Imu9DoF__fini(msg);
    return false;
  }
  // linear_acceleration
  if (!geometry_msgs__msg__Vector3__init(&msg->linear_acceleration)) {
    allan_variance_msgs__msg__Imu9DoF__fini(msg);
    return false;
  }
  // magnetic_field
  if (!geometry_msgs__msg__Vector3__init(&msg->magnetic_field)) {
    allan_variance_msgs__msg__Imu9DoF__fini(msg);
    return false;
  }
  // magnetic_data_updated
  return true;
}

void
allan_variance_msgs__msg__Imu9DoF__fini(allan_variance_msgs__msg__Imu9DoF * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // angular_velocity
  geometry_msgs__msg__Vector3__fini(&msg->angular_velocity);
  // linear_acceleration
  geometry_msgs__msg__Vector3__fini(&msg->linear_acceleration);
  // magnetic_field
  geometry_msgs__msg__Vector3__fini(&msg->magnetic_field);
  // magnetic_data_updated
}

bool
allan_variance_msgs__msg__Imu9DoF__are_equal(const allan_variance_msgs__msg__Imu9DoF * lhs, const allan_variance_msgs__msg__Imu9DoF * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->angular_velocity), &(rhs->angular_velocity)))
  {
    return false;
  }
  // linear_acceleration
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->linear_acceleration), &(rhs->linear_acceleration)))
  {
    return false;
  }
  // magnetic_field
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->magnetic_field), &(rhs->magnetic_field)))
  {
    return false;
  }
  // magnetic_data_updated
  if (lhs->magnetic_data_updated != rhs->magnetic_data_updated) {
    return false;
  }
  return true;
}

bool
allan_variance_msgs__msg__Imu9DoF__copy(
  const allan_variance_msgs__msg__Imu9DoF * input,
  allan_variance_msgs__msg__Imu9DoF * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->angular_velocity), &(output->angular_velocity)))
  {
    return false;
  }
  // linear_acceleration
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->linear_acceleration), &(output->linear_acceleration)))
  {
    return false;
  }
  // magnetic_field
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->magnetic_field), &(output->magnetic_field)))
  {
    return false;
  }
  // magnetic_data_updated
  output->magnetic_data_updated = input->magnetic_data_updated;
  return true;
}

allan_variance_msgs__msg__Imu9DoF *
allan_variance_msgs__msg__Imu9DoF__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  allan_variance_msgs__msg__Imu9DoF * msg = (allan_variance_msgs__msg__Imu9DoF *)allocator.allocate(sizeof(allan_variance_msgs__msg__Imu9DoF), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(allan_variance_msgs__msg__Imu9DoF));
  bool success = allan_variance_msgs__msg__Imu9DoF__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
allan_variance_msgs__msg__Imu9DoF__destroy(allan_variance_msgs__msg__Imu9DoF * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    allan_variance_msgs__msg__Imu9DoF__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
allan_variance_msgs__msg__Imu9DoF__Sequence__init(allan_variance_msgs__msg__Imu9DoF__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  allan_variance_msgs__msg__Imu9DoF * data = NULL;

  if (size) {
    data = (allan_variance_msgs__msg__Imu9DoF *)allocator.zero_allocate(size, sizeof(allan_variance_msgs__msg__Imu9DoF), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = allan_variance_msgs__msg__Imu9DoF__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        allan_variance_msgs__msg__Imu9DoF__fini(&data[i - 1]);
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
allan_variance_msgs__msg__Imu9DoF__Sequence__fini(allan_variance_msgs__msg__Imu9DoF__Sequence * array)
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
      allan_variance_msgs__msg__Imu9DoF__fini(&array->data[i]);
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

allan_variance_msgs__msg__Imu9DoF__Sequence *
allan_variance_msgs__msg__Imu9DoF__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  allan_variance_msgs__msg__Imu9DoF__Sequence * array = (allan_variance_msgs__msg__Imu9DoF__Sequence *)allocator.allocate(sizeof(allan_variance_msgs__msg__Imu9DoF__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = allan_variance_msgs__msg__Imu9DoF__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
allan_variance_msgs__msg__Imu9DoF__Sequence__destroy(allan_variance_msgs__msg__Imu9DoF__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    allan_variance_msgs__msg__Imu9DoF__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
allan_variance_msgs__msg__Imu9DoF__Sequence__are_equal(const allan_variance_msgs__msg__Imu9DoF__Sequence * lhs, const allan_variance_msgs__msg__Imu9DoF__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!allan_variance_msgs__msg__Imu9DoF__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
allan_variance_msgs__msg__Imu9DoF__Sequence__copy(
  const allan_variance_msgs__msg__Imu9DoF__Sequence * input,
  allan_variance_msgs__msg__Imu9DoF__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(allan_variance_msgs__msg__Imu9DoF);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    allan_variance_msgs__msg__Imu9DoF * data =
      (allan_variance_msgs__msg__Imu9DoF *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!allan_variance_msgs__msg__Imu9DoF__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          allan_variance_msgs__msg__Imu9DoF__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!allan_variance_msgs__msg__Imu9DoF__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
