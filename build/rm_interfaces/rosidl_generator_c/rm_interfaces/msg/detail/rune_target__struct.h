// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_interfaces:msg/RuneTarget.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__RUNE_TARGET__STRUCT_H_
#define RM_INTERFACES__MSG__DETAIL__RUNE_TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'pts'
#include "rm_interfaces/msg/detail/point2d__struct.h"

/// Struct defined in msg/RuneTarget in the package rm_interfaces.
typedef struct rm_interfaces__msg__RuneTarget
{
  std_msgs__msg__Header header;
  rm_interfaces__msg__Point2d pts[5];
  bool is_lost;
  bool is_big_rune;
} rm_interfaces__msg__RuneTarget;

// Struct for a sequence of rm_interfaces__msg__RuneTarget.
typedef struct rm_interfaces__msg__RuneTarget__Sequence
{
  rm_interfaces__msg__RuneTarget * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_interfaces__msg__RuneTarget__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_INTERFACES__MSG__DETAIL__RUNE_TARGET__STRUCT_H_
