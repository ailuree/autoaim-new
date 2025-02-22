// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rm_interfaces:msg/OperatorCommand.idl
// generated code does not contain a copyright notice
#include "rm_interfaces/msg/detail/operator_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rm_interfaces/msg/detail/operator_command__struct.h"
#include "rm_interfaces/msg/detail/operator_command__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _OperatorCommand__ros_msg_type = rm_interfaces__msg__OperatorCommand;

static bool _OperatorCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OperatorCommand__ros_msg_type * ros_message = static_cast<const _OperatorCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: is_retreating
  {
    cdr << ros_message->is_retreating;
  }

  // Field name: is_drone_avoiding
  {
    cdr << ros_message->is_drone_avoiding;
  }

  // Field name: is_outpost_attacking
  {
    cdr << ros_message->is_outpost_attacking;
  }

  return true;
}

static bool _OperatorCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OperatorCommand__ros_msg_type * ros_message = static_cast<_OperatorCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: is_retreating
  {
    cdr >> ros_message->is_retreating;
  }

  // Field name: is_drone_avoiding
  {
    cdr >> ros_message->is_drone_avoiding;
  }

  // Field name: is_outpost_attacking
  {
    cdr >> ros_message->is_outpost_attacking;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_interfaces
size_t get_serialized_size_rm_interfaces__msg__OperatorCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OperatorCommand__ros_msg_type * ros_message = static_cast<const _OperatorCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name is_retreating
  {
    size_t item_size = sizeof(ros_message->is_retreating);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_drone_avoiding
  {
    size_t item_size = sizeof(ros_message->is_drone_avoiding);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_outpost_attacking
  {
    size_t item_size = sizeof(ros_message->is_outpost_attacking);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _OperatorCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rm_interfaces__msg__OperatorCommand(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_interfaces
size_t max_serialized_size_rm_interfaces__msg__OperatorCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: is_retreating
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_drone_avoiding
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_outpost_attacking
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rm_interfaces__msg__OperatorCommand;
    is_plain =
      (
      offsetof(DataType, is_outpost_attacking) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _OperatorCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rm_interfaces__msg__OperatorCommand(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_OperatorCommand = {
  "rm_interfaces::msg",
  "OperatorCommand",
  _OperatorCommand__cdr_serialize,
  _OperatorCommand__cdr_deserialize,
  _OperatorCommand__get_serialized_size,
  _OperatorCommand__max_serialized_size
};

static rosidl_message_type_support_t _OperatorCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OperatorCommand,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rm_interfaces, msg, OperatorCommand)() {
  return &_OperatorCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
