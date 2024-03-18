// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from allan_variance_msgs:msg/Imu9DoF.idl
// generated code does not contain a copyright notice

#ifndef ALLAN_VARIANCE_MSGS__MSG__DETAIL__IMU9_DO_F__TRAITS_HPP_
#define ALLAN_VARIANCE_MSGS__MSG__DETAIL__IMU9_DO_F__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "allan_variance_msgs/msg/detail/imu9_do_f__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'angular_velocity'
// Member 'linear_acceleration'
// Member 'magnetic_field'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace allan_variance_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Imu9DoF & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: angular_velocity
  {
    out << "angular_velocity: ";
    to_flow_style_yaml(msg.angular_velocity, out);
    out << ", ";
  }

  // member: linear_acceleration
  {
    out << "linear_acceleration: ";
    to_flow_style_yaml(msg.linear_acceleration, out);
    out << ", ";
  }

  // member: magnetic_field
  {
    out << "magnetic_field: ";
    to_flow_style_yaml(msg.magnetic_field, out);
    out << ", ";
  }

  // member: magnetic_data_updated
  {
    out << "magnetic_data_updated: ";
    rosidl_generator_traits::value_to_yaml(msg.magnetic_data_updated, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Imu9DoF & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity:\n";
    to_block_style_yaml(msg.angular_velocity, out, indentation + 2);
  }

  // member: linear_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_acceleration:\n";
    to_block_style_yaml(msg.linear_acceleration, out, indentation + 2);
  }

  // member: magnetic_field
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "magnetic_field:\n";
    to_block_style_yaml(msg.magnetic_field, out, indentation + 2);
  }

  // member: magnetic_data_updated
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "magnetic_data_updated: ";
    rosidl_generator_traits::value_to_yaml(msg.magnetic_data_updated, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Imu9DoF & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace allan_variance_msgs

namespace rosidl_generator_traits
{

[[deprecated("use allan_variance_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const allan_variance_msgs::msg::Imu9DoF & msg,
  std::ostream & out, size_t indentation = 0)
{
  allan_variance_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use allan_variance_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const allan_variance_msgs::msg::Imu9DoF & msg)
{
  return allan_variance_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<allan_variance_msgs::msg::Imu9DoF>()
{
  return "allan_variance_msgs::msg::Imu9DoF";
}

template<>
inline const char * name<allan_variance_msgs::msg::Imu9DoF>()
{
  return "allan_variance_msgs/msg/Imu9DoF";
}

template<>
struct has_fixed_size<allan_variance_msgs::msg::Imu9DoF>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<allan_variance_msgs::msg::Imu9DoF>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<allan_variance_msgs::msg::Imu9DoF>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ALLAN_VARIANCE_MSGS__MSG__DETAIL__IMU9_DO_F__TRAITS_HPP_
