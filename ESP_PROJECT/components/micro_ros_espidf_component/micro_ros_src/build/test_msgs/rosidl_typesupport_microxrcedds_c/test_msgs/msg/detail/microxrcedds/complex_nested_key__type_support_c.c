// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from test_msgs:msg/ComplexNestedKey.idl
// generated code does not contain a copyright notice
#include "test_msgs/msg/detail/complex_nested_key__rosidl_typesupport_microxrcedds_c.h"
#include "test_msgs/msg/detail/complex_nested_key__functions.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "test_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "test_msgs/msg/detail/complex_nested_key__struct.h"
#include "test_msgs/msg/detail/complex_nested_key__functions.h"

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

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "test_msgs/msg/detail/non_keyed_with_nested_key__functions.h"  // nested_keys

// forward declare type support functions
size_t get_serialized_size_test_msgs__msg__NonKeyedWithNestedKey(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__NonKeyedWithNestedKey(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, NonKeyedWithNestedKey)();


typedef test_msgs__msg__ComplexNestedKey _ComplexNestedKey__ros_msg_type;

static bool _ComplexNestedKey__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _ComplexNestedKey__ros_msg_type * ros_message = (_ComplexNestedKey__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: uint32_key
  rv = ucdr_serialize_uint32_t(cdr, ros_message->uint32_key);
  // Member: nested_keys
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, NonKeyedWithNestedKey
      )()->data))->cdr_serialize(&ros_message->nested_keys, cdr);
  // Member: float64_value
  rv = ucdr_serialize_double(cdr, ros_message->float64_value);

  return rv;
}

static bool _ComplexNestedKey__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _ComplexNestedKey__ros_msg_type * ros_message = (_ComplexNestedKey__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: uint32_key
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message->uint32_key);
  // Field name: nested_keys
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, NonKeyedWithNestedKey
      )()->data))->cdr_deserialize(cdr, &ros_message->nested_keys);
  // Field name: float64_value
  rv = ucdr_deserialize_double(cdr, &ros_message->float64_value);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__msg__ComplexNestedKey(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _ComplexNestedKey__ros_msg_type * ros_message = (const _ComplexNestedKey__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: uint32_key
  {
    const size_t item_size = sizeof(ros_message->uint32_key);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: nested_keys
  current_alignment +=
    get_serialized_size_test_msgs__msg__NonKeyedWithNestedKey(&ros_message->nested_keys, current_alignment);
  // Member: float64_value
  {
    const size_t item_size = sizeof(ros_message->float64_value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ComplexNestedKey__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_test_msgs__msg__ComplexNestedKey(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__msg__ComplexNestedKey(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: uint32_key
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: nested_keys
  current_alignment +=
    max_serialized_size_test_msgs__msg__NonKeyedWithNestedKey(full_bounded, current_alignment);
  // Member: float64_value
  current_alignment += ucdr_alignment(current_alignment, sizeof(double)) + sizeof(double);

  return current_alignment - initial_alignment;
}

static size_t _ComplexNestedKey__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_test_msgs__msg__ComplexNestedKey(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_ComplexNestedKey = {
  "test_msgs::msg",
  "ComplexNestedKey",
  _ComplexNestedKey__cdr_serialize,
  _ComplexNestedKey__cdr_deserialize,
  _ComplexNestedKey__get_serialized_size,
  get_serialized_size_test_msgs__msg__ComplexNestedKey,
  _ComplexNestedKey__max_serialized_size
};

static rosidl_message_type_support_t _ComplexNestedKey__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_ComplexNestedKey,
  get_message_typesupport_handle_function,

  &test_msgs__msg__ComplexNestedKey__get_type_hash,
  &test_msgs__msg__ComplexNestedKey__get_type_description,
  &test_msgs__msg__ComplexNestedKey__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, ComplexNestedKey)() {
  return &_ComplexNestedKey__type_support;
}

#if defined(__cplusplus)
}
#endif
