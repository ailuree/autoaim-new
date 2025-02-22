// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rm_interfaces:msg/OperatorCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rm_interfaces/msg/detail/operator_command__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rm_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void OperatorCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rm_interfaces::msg::OperatorCommand(_init);
}

void OperatorCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rm_interfaces::msg::OperatorCommand *>(message_memory);
  typed_message->~OperatorCommand();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember OperatorCommand_message_member_array[3] = {
  {
    "is_retreating",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_interfaces::msg::OperatorCommand, is_retreating),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_drone_avoiding",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_interfaces::msg::OperatorCommand, is_drone_avoiding),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_outpost_attacking",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_interfaces::msg::OperatorCommand, is_outpost_attacking),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers OperatorCommand_message_members = {
  "rm_interfaces::msg",  // message namespace
  "OperatorCommand",  // message name
  3,  // number of fields
  sizeof(rm_interfaces::msg::OperatorCommand),
  OperatorCommand_message_member_array,  // message members
  OperatorCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  OperatorCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t OperatorCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &OperatorCommand_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rm_interfaces::msg::OperatorCommand>()
{
  return &::rm_interfaces::msg::rosidl_typesupport_introspection_cpp::OperatorCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rm_interfaces, msg, OperatorCommand)() {
  return &::rm_interfaces::msg::rosidl_typesupport_introspection_cpp::OperatorCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
