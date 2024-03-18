// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from allan_variance_msgs:msg/Imu9DoF.idl
// generated code does not contain a copyright notice

#ifndef ALLAN_VARIANCE_MSGS__MSG__DETAIL__IMU9_DO_F__STRUCT_HPP_
#define ALLAN_VARIANCE_MSGS__MSG__DETAIL__IMU9_DO_F__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'angular_velocity'
// Member 'linear_acceleration'
// Member 'magnetic_field'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__allan_variance_msgs__msg__Imu9DoF __attribute__((deprecated))
#else
# define DEPRECATED__allan_variance_msgs__msg__Imu9DoF __declspec(deprecated)
#endif

namespace allan_variance_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Imu9DoF_
{
  using Type = Imu9DoF_<ContainerAllocator>;

  explicit Imu9DoF_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    angular_velocity(_init),
    linear_acceleration(_init),
    magnetic_field(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->magnetic_data_updated = false;
    }
  }

  explicit Imu9DoF_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    angular_velocity(_alloc, _init),
    linear_acceleration(_alloc, _init),
    magnetic_field(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->magnetic_data_updated = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _angular_velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _angular_velocity_type angular_velocity;
  using _linear_acceleration_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _linear_acceleration_type linear_acceleration;
  using _magnetic_field_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _magnetic_field_type magnetic_field;
  using _magnetic_data_updated_type =
    bool;
  _magnetic_data_updated_type magnetic_data_updated;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }
  Type & set__linear_acceleration(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->linear_acceleration = _arg;
    return *this;
  }
  Type & set__magnetic_field(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->magnetic_field = _arg;
    return *this;
  }
  Type & set__magnetic_data_updated(
    const bool & _arg)
  {
    this->magnetic_data_updated = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    allan_variance_msgs::msg::Imu9DoF_<ContainerAllocator> *;
  using ConstRawPtr =
    const allan_variance_msgs::msg::Imu9DoF_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<allan_variance_msgs::msg::Imu9DoF_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<allan_variance_msgs::msg::Imu9DoF_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      allan_variance_msgs::msg::Imu9DoF_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<allan_variance_msgs::msg::Imu9DoF_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      allan_variance_msgs::msg::Imu9DoF_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<allan_variance_msgs::msg::Imu9DoF_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<allan_variance_msgs::msg::Imu9DoF_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<allan_variance_msgs::msg::Imu9DoF_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__allan_variance_msgs__msg__Imu9DoF
    std::shared_ptr<allan_variance_msgs::msg::Imu9DoF_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__allan_variance_msgs__msg__Imu9DoF
    std::shared_ptr<allan_variance_msgs::msg::Imu9DoF_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Imu9DoF_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->linear_acceleration != other.linear_acceleration) {
      return false;
    }
    if (this->magnetic_field != other.magnetic_field) {
      return false;
    }
    if (this->magnetic_data_updated != other.magnetic_data_updated) {
      return false;
    }
    return true;
  }
  bool operator!=(const Imu9DoF_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Imu9DoF_

// alias to use template instance with default allocator
using Imu9DoF =
  allan_variance_msgs::msg::Imu9DoF_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace allan_variance_msgs

#endif  // ALLAN_VARIANCE_MSGS__MSG__DETAIL__IMU9_DO_F__STRUCT_HPP_
