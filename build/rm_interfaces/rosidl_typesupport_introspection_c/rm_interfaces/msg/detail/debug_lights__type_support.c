// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rm_interfaces:msg/DebugLights.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rm_interfaces/msg/detail/debug_lights__rosidl_typesupport_introspection_c.h"
#include "rm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rm_interfaces/msg/detail/debug_lights__functions.h"
#include "rm_interfaces/msg/detail/debug_lights__struct.h"


// Include directives for member types
// Member `data`
#include "rm_interfaces/msg/debug_light.h"
// Member `data`
#include "rm_interfaces/msg/detail/debug_light__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rm_interfaces__msg__DebugLights__rosidl_typesupport_introspection_c__DebugLights_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rm_interfaces__msg__DebugLights__init(message_memory);
}

void rm_interfaces__msg__DebugLights__rosidl_typesupport_introspection_c__DebugLights_fini_function(void * message_memory)
{
  rm_interfaces__msg__DebugLights__fini(message_memory);
}

size_t rm_interfaces__msg__DebugLights__rosidl_typesupport_introspection_c__size_function__DebugLights__data(
  const void * untyped_member)
{
  const rm_interfaces__msg__DebugLight__Sequence * member =
    (const rm_interfaces__msg__DebugLight__Sequence *)(untyped_member);
  return member->size;
}

const void * rm_interfaces__msg__DebugLights__rosidl_typesupport_introspection_c__get_const_function__DebugLights__data(
  const void * untyped_member, size_t index)
{
  const rm_interfaces__msg__DebugLight__Sequence * member =
    (const rm_interfaces__msg__DebugLight__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rm_interfaces__msg__DebugLights__rosidl_typesupport_introspection_c__get_function__DebugLights__data(
  void * untyped_member, size_t index)
{
  rm_interfaces__msg__DebugLight__Sequence * member =
    (rm_interfaces__msg__DebugLight__Sequence *)(untyped_member);
  return &member->data[index];
}

void rm_interfaces__msg__DebugLights__rosidl_typesupport_introspection_c__fetch_function__DebugLights__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rm_interfaces__msg__DebugLight * item =
    ((const rm_interfaces__msg__DebugLight *)
    rm_interfaces__msg__DebugLights__rosidl_typesupport_introspection_c__get_const_function__DebugLights__data(untyped_member, index));
  rm_interfaces__msg__DebugLight * value =
    (rm_interfaces__msg__DebugLight *)(untyped_value);
  *value = *item;
}

void rm_interfaces__msg__DebugLights__rosidl_typesupport_introspection_c__assign_function__DebugLights__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rm_interfaces__msg__DebugLight * item =
    ((rm_interfaces__msg__DebugLight *)
    rm_interfaces__msg__DebugLights__rosidl_typesupport_introspection_c__get_function__DebugLights__data(untyped_member, index));
  const rm_interfaces__msg__DebugLight * value =
    (const rm_interfaces__msg__DebugLight *)(untyped_value);
  *item = *value;
}

bool rm_interfaces__msg__DebugLights__rosidl_typesupport_introspection_c__resize_function__DebugLights__data(
  void * untyped_member, size_t size)
{
  rm_interfaces__msg__DebugLight__Sequence * member =
    (rm_interfaces__msg__DebugLight__Sequence *)(untyped_member);
  rm_interfaces__msg__DebugLight__Sequence__fini(member);
  return rm_interfaces__msg__DebugLight__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rm_interfaces__msg__DebugLights__rosidl_typesupport_introspection_c__DebugLights_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rm_interfaces__msg__DebugLights, data),  // bytes offset in struct
    NULL,  // default value
    rm_interfaces__msg__DebugLights__rosidl_typesupport_introspection_c__size_function__DebugLights__data,  // size() function pointer
    rm_interfaces__msg__DebugLights__rosidl_typesupport_introspection_c__get_const_function__DebugLights__data,  // get_const(index) function pointer
    rm_interfaces__msg__DebugLights__rosidl_typesupport_introspection_c__get_function__DebugLights__data,  // get(index) function pointer
    rm_interfaces__msg__DebugLights__rosidl_typesupport_introspection_c__fetch_function__DebugLights__data,  // fetch(index, &value) function pointer
    rm_interfaces__msg__DebugLights__rosidl_typesupport_introspection_c__assign_function__DebugLights__data,  // assign(index, value) function pointer
    rm_interfaces__msg__DebugLights__rosidl_typesupport_introspection_c__resize_function__DebugLights__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rm_interfaces__msg__DebugLights__rosidl_typesupport_introspection_c__DebugLights_message_members = {
  "rm_interfaces__msg",  // message namespace
  "DebugLights",  // message name
  1,  // number of fields
  sizeof(rm_interfaces__msg__DebugLights),
  rm_interfaces__msg__DebugLights__rosidl_typesupport_introspection_c__DebugLights_message_member_array,  // message members
  rm_interfaces__msg__DebugLights__rosidl_typesupport_introspection_c__DebugLights_init_function,  // function to initialize message memory (memory has to be allocated)
  rm_interfaces__msg__DebugLights__rosidl_typesupport_introspection_c__DebugLights_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rm_interfaces__msg__DebugLights__rosidl_typesupport_introspection_c__DebugLights_message_type_support_handle = {
  0,
  &rm_interfaces__msg__DebugLights__rosidl_typesupport_introspection_c__DebugLights_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rm_interfaces, msg, DebugLights)() {
  rm_interfaces__msg__DebugLights__rosidl_typesupport_introspection_c__DebugLights_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rm_interfaces, msg, DebugLight)();
  if (!rm_interfaces__msg__DebugLights__rosidl_typesupport_introspection_c__DebugLights_message_type_support_handle.typesupport_identifier) {
    rm_interfaces__msg__DebugLights__rosidl_typesupport_introspection_c__DebugLights_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rm_interfaces__msg__DebugLights__rosidl_typesupport_introspection_c__DebugLights_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
