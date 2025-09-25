// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from test_msgs:msg/KeyedLong.idl
// generated code does not contain a copyright notice
#include "test_msgs/msg/detail/keyed_long__rosidl_typesupport_microxrcedds_c.h"
#include "test_msgs/msg/detail/keyed_long__functions.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "test_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "test_msgs/msg/detail/keyed_long__struct.h"
#include "test_msgs/msg/detail/keyed_long__functions.h"

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


// forward declare type support functions


typedef test_msgs__msg__KeyedLong _KeyedLong__ros_msg_type;

static bool _KeyedLong__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _KeyedLong__ros_msg_type * ros_message = (_KeyedLong__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: key
  rv = ucdr_serialize_int32_t(cdr, ros_message->key);
  // Member: value
  rv = ucdr_serialize_int32_t(cdr, ros_message->value);

  return rv;
}

static bool _KeyedLong__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _KeyedLong__ros_msg_type * ros_message = (_KeyedLong__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: key
  rv = ucdr_deserialize_int32_t(cdr, &ros_message->key);
  // Field name: value
  rv = ucdr_deserialize_int32_t(cdr, &ros_message->value);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__msg__KeyedLong(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _KeyedLong__ros_msg_type * ros_message = (const _KeyedLong__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: key
  {
    const size_t item_size = sizeof(ros_message->key);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: value
  {
    const size_t item_size = sizeof(ros_message->value);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _KeyedLong__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_test_msgs__msg__KeyedLong(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__msg__KeyedLong(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: key
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);
  // Member: value
  current_alignment += ucdr_alignment(current_alignment, sizeof(int32_t)) + sizeof(int32_t);

  return current_alignment - initial_alignment;
}

static size_t _KeyedLong__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_test_msgs__msg__KeyedLong(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_KeyedLong = {
  "test_msgs::msg",
  "KeyedLong",
  _KeyedLong__cdr_serialize,
  _KeyedLong__cdr_deserialize,
  _KeyedLong__get_serialized_size,
  get_serialized_size_test_msgs__msg__KeyedLong,
  _KeyedLong__max_serialized_size
};

static rosidl_message_type_support_t _KeyedLong__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_KeyedLong,
  get_message_typesupport_handle_function,

  &test_msgs__msg__KeyedLong__get_type_hash,
  &test_msgs__msg__KeyedLong__get_type_description,
  &test_msgs__msg__KeyedLong__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, test_msgs, msg, KeyedLong)() {
  return &_KeyedLong__type_support;
}

#if defined(__cplusplus)
}
#endif
