// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from test_msgs:msg/NonKeyedWithNestedKey.idl
// generated code does not contain a copyright notice
#include "test_msgs/msg/detail/non_keyed_with_nested_key__rosidl_typesupport_microxrcedds_c.h"
#include "test_msgs/msg/detail/non_keyed_with_nested_key__functions.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "test_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "test_msgs/msg/detail/non_keyed_with_nested_key__struct.h"
#include "test_msgs/msg/detail/non_keyed_with_nested_key__functions.h"

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

#include "test_msgs/msg/detail/keyed_string__functions.h"  // nested_data

// forward declare type support functions
size_t get_serialized_size_test_msgs__msg__KeyedString(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__KeyedString(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, KeyedString)();


typedef test_msgs__msg__NonKeyedWithNestedKey _NonKeyedWithNestedKey__ros_msg_type;

static bool _NonKeyedWithNestedKey__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _NonKeyedWithNestedKey__ros_msg_type * ros_message = (_NonKeyedWithNestedKey__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: nested_data
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, KeyedString
      )()->data))->cdr_serialize(&ros_message->nested_data, cdr);
  // Member: some_int
  rv = ucdr_serialize_int32_t(cdr, ros_message->some_int);

  return rv;
}

static bool _NonKeyedWithNestedKey__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _NonKeyedWithNestedKey__ros_msg_type * ros_message = (_NonKeyedWithNestedKey__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: nested_data
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, KeyedString
      )()->data))->cdr_deserialize(cdr, &ros_message->nested_data);
  // Field name: some_int
  rv = ucdr_deserialize_int32_t(cdr, &ros_message->some_int);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__msg__NonKeyedWithNestedKey(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _NonKeyedWithNestedKey__ros_msg_type * ros_message = (const _NonKeyedWithNestedKey__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: nested_data
  current_alignment +=
    get_serialized_size_test_msgs__msg__KeyedString(&ros_message->nested_data, current_alignment);
  // Member: some_int
  {
    const size_t item_size = sizeof(ros_message->some_int);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NonKeyedWithNestedKey__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_test_msgs__msg__NonKeyedWithNestedKey(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__msg__NonKeyedWithNestedKey(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: nested_data
  current_alignment +=
    max_serialized_size_test_msgs__msg__KeyedString(full_bounded, current_alignment);
  // Member: some_int
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);

  return current_alignment - initial_alignment;
}

static size_t _NonKeyedWithNestedKey__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_test_msgs__msg__NonKeyedWithNestedKey(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_NonKeyedWithNestedKey = {
  "test_msgs::msg",
  "NonKeyedWithNestedKey",
  _NonKeyedWithNestedKey__cdr_serialize,
  _NonKeyedWithNestedKey__cdr_deserialize,
  _NonKeyedWithNestedKey__get_serialized_size,
  get_serialized_size_test_msgs__msg__NonKeyedWithNestedKey,
  _NonKeyedWithNestedKey__max_serialized_size
};

static rosidl_message_type_support_t _NonKeyedWithNestedKey__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_NonKeyedWithNestedKey,
  get_message_typesupport_handle_function,

  &test_msgs__msg__NonKeyedWithNestedKey__get_type_hash,
  &test_msgs__msg__NonKeyedWithNestedKey__get_type_description,
  &test_msgs__msg__NonKeyedWithNestedKey__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, NonKeyedWithNestedKey)() {
  return &_NonKeyedWithNestedKey__type_support;
}

#if defined(__cplusplus)
}
#endif
