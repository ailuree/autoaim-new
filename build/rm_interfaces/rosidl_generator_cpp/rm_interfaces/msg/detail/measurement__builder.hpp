// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_interfaces:msg/Measurement.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__MEASUREMENT__BUILDER_HPP_
#define RM_INTERFACES__MSG__DETAIL__MEASUREMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_interfaces/msg/detail/measurement__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_interfaces
{

namespace msg
{

namespace builder
{

class Init_Measurement_yaw
{
public:
  explicit Init_Measurement_yaw(::rm_interfaces::msg::Measurement & msg)
  : msg_(msg)
  {}
  ::rm_interfaces::msg::Measurement yaw(::rm_interfaces::msg::Measurement::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::msg::Measurement msg_;
};

class Init_Measurement_z
{
public:
  explicit Init_Measurement_z(::rm_interfaces::msg::Measurement & msg)
  : msg_(msg)
  {}
  Init_Measurement_yaw z(::rm_interfaces::msg::Measurement::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Measurement_yaw(msg_);
  }

private:
  ::rm_interfaces::msg::Measurement msg_;
};

class Init_Measurement_y
{
public:
  explicit Init_Measurement_y(::rm_interfaces::msg::Measurement & msg)
  : msg_(msg)
  {}
  Init_Measurement_z y(::rm_interfaces::msg::Measurement::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Measurement_z(msg_);
  }

private:
  ::rm_interfaces::msg::Measurement msg_;
};

class Init_Measurement_x
{
public:
  Init_Measurement_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Measurement_y x(::rm_interfaces::msg::Measurement::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Measurement_y(msg_);
  }

private:
  ::rm_interfaces::msg::Measurement msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::msg::Measurement>()
{
  return rm_interfaces::msg::builder::Init_Measurement_x();
}

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__MSG__DETAIL__MEASUREMENT__BUILDER_HPP_
