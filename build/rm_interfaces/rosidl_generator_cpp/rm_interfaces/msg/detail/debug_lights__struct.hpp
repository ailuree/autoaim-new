// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_interfaces:msg/DebugLights.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__DEBUG_LIGHTS__STRUCT_HPP_
#define RM_INTERFACES__MSG__DETAIL__DEBUG_LIGHTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'data'
#include "rm_interfaces/msg/detail/debug_light__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rm_interfaces__msg__DebugLights __attribute__((deprecated))
#else
# define DEPRECATED__rm_interfaces__msg__DebugLights __declspec(deprecated)
#endif

namespace rm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DebugLights_
{
  using Type = DebugLights_<ContainerAllocator>;

  explicit DebugLights_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit DebugLights_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _data_type =
    std::vector<rm_interfaces::msg::DebugLight_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rm_interfaces::msg::DebugLight_<ContainerAllocator>>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::vector<rm_interfaces::msg::DebugLight_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rm_interfaces::msg::DebugLight_<ContainerAllocator>>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_interfaces::msg::DebugLights_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_interfaces::msg::DebugLights_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_interfaces::msg::DebugLights_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_interfaces::msg::DebugLights_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::msg::DebugLights_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::msg::DebugLights_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::msg::DebugLights_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::msg::DebugLights_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_interfaces::msg::DebugLights_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_interfaces::msg::DebugLights_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_interfaces__msg__DebugLights
    std::shared_ptr<rm_interfaces::msg::DebugLights_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_interfaces__msg__DebugLights
    std::shared_ptr<rm_interfaces::msg::DebugLights_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DebugLights_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const DebugLights_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DebugLights_

// alias to use template instance with default allocator
using DebugLights =
  rm_interfaces::msg::DebugLights_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__MSG__DETAIL__DEBUG_LIGHTS__STRUCT_HPP_
