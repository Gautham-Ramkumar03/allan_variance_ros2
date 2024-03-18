// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from allan_variance_msgs:msg/Imu9DoF.idl
// generated code does not contain a copyright notice

#ifndef ALLAN_VARIANCE_MSGS__MSG__DETAIL__IMU9_DO_F__BUILDER_HPP_
#define ALLAN_VARIANCE_MSGS__MSG__DETAIL__IMU9_DO_F__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "allan_variance_msgs/msg/detail/imu9_do_f__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace allan_variance_msgs
{

namespace msg
{

namespace builder
{

class Init_Imu9DoF_magnetic_data_updated
{
public:
  explicit Init_Imu9DoF_magnetic_data_updated(::allan_variance_msgs::msg::Imu9DoF & msg)
  : msg_(msg)
  {}
  ::allan_variance_msgs::msg::Imu9DoF magnetic_data_updated(::allan_variance_msgs::msg::Imu9DoF::_magnetic_data_updated_type arg)
  {
    msg_.magnetic_data_updated = std::move(arg);
    return std::move(msg_);
  }

private:
  ::allan_variance_msgs::msg::Imu9DoF msg_;
};

class Init_Imu9DoF_magnetic_field
{
public:
  explicit Init_Imu9DoF_magnetic_field(::allan_variance_msgs::msg::Imu9DoF & msg)
  : msg_(msg)
  {}
  Init_Imu9DoF_magnetic_data_updated magnetic_field(::allan_variance_msgs::msg::Imu9DoF::_magnetic_field_type arg)
  {
    msg_.magnetic_field = std::move(arg);
    return Init_Imu9DoF_magnetic_data_updated(msg_);
  }

private:
  ::allan_variance_msgs::msg::Imu9DoF msg_;
};

class Init_Imu9DoF_linear_acceleration
{
public:
  explicit Init_Imu9DoF_linear_acceleration(::allan_variance_msgs::msg::Imu9DoF & msg)
  : msg_(msg)
  {}
  Init_Imu9DoF_magnetic_field linear_acceleration(::allan_variance_msgs::msg::Imu9DoF::_linear_acceleration_type arg)
  {
    msg_.linear_acceleration = std::move(arg);
    return Init_Imu9DoF_magnetic_field(msg_);
  }

private:
  ::allan_variance_msgs::msg::Imu9DoF msg_;
};

class Init_Imu9DoF_angular_velocity
{
public:
  explicit Init_Imu9DoF_angular_velocity(::allan_variance_msgs::msg::Imu9DoF & msg)
  : msg_(msg)
  {}
  Init_Imu9DoF_linear_acceleration angular_velocity(::allan_variance_msgs::msg::Imu9DoF::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_Imu9DoF_linear_acceleration(msg_);
  }

private:
  ::allan_variance_msgs::msg::Imu9DoF msg_;
};

class Init_Imu9DoF_header
{
public:
  Init_Imu9DoF_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Imu9DoF_angular_velocity header(::allan_variance_msgs::msg::Imu9DoF::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Imu9DoF_angular_velocity(msg_);
  }

private:
  ::allan_variance_msgs::msg::Imu9DoF msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::allan_variance_msgs::msg::Imu9DoF>()
{
  return allan_variance_msgs::msg::builder::Init_Imu9DoF_header();
}

}  // namespace allan_variance_msgs

#endif  // ALLAN_VARIANCE_MSGS__MSG__DETAIL__IMU9_DO_F__BUILDER_HPP_
