// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_interfaces:msg/DebugArmors.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__DEBUG_ARMORS__STRUCT_HPP_
#define RM_INTERFACES__MSG__DETAIL__DEBUG_ARMORS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'data'
#include "rm_interfaces/msg/detail/debug_armor__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rm_interfaces__msg__DebugArmors __attribute__((deprecated))
#else
# define DEPRECATED__rm_interfaces__msg__DebugArmors __declspec(deprecated)
#endif

namespace rm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DebugArmors_
{
  using Type = DebugArmors_<ContainerAllocator>;

  explicit DebugArmors_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit DebugArmors_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _data_type =
    std::vector<rm_interfaces::msg::DebugArmor_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rm_interfaces::msg::DebugArmor_<ContainerAllocator>>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::vector<rm_interfaces::msg::DebugArmor_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rm_interfaces::msg::DebugArmor_<ContainerAllocator>>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_interfaces::msg::DebugArmors_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_interfaces::msg::DebugArmors_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_interfaces::msg::DebugArmors_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_interfaces::msg::DebugArmors_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::msg::DebugArmors_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::msg::DebugArmors_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::msg::DebugArmors_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::msg::DebugArmors_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_interfaces::msg::DebugArmors_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_interfaces::msg::DebugArmors_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_interfaces__msg__DebugArmors
    std::shared_ptr<rm_interfaces::msg::DebugArmors_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_interfaces__msg__DebugArmors
    std::shared_ptr<rm_interfaces::msg::DebugArmors_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DebugArmors_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const DebugArmors_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DebugArmors_

// alias to use template instance with default allocator
using DebugArmors =
  rm_interfaces::msg::DebugArmors_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__MSG__DETAIL__DEBUG_ARMORS__STRUCT_HPP_
