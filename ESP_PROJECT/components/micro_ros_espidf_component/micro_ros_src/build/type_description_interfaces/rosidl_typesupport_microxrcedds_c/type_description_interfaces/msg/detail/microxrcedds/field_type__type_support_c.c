// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from type_description_interfaces:msg/FieldType.idl
// generated code does not contain a copyright notice
#include "type_description_interfaces/msg/detail/field_type__rosidl_typesupport_microxrcedds_c.h"
#include "type_description_interfaces/msg/detail/field_type__functions.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "type_description_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "type_description_interfaces/msg/detail/field_type__struct.h"
#include "type_description_interfaces/msg/detail/field_type__functions.h"

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

#include "rosidl_runtime_c/string.h"  // nested_type_name
#include "rosidl_runtime_c/string_functions.h"  // nested_type_name

// forward declare type support functions


typedef type_description_interfaces__msg__FieldType _FieldType__ros_msg_type;

static bool _FieldType__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _FieldType__ros_msg_type * ros_message = (_FieldType__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: type_id
  rv = ucdr_serialize_uint8_t(cdr, ros_message->type_id);
  // Member: capacity
  rv = ucdr_serialize_uint64_t(cdr, ros_message->capacity);
  // Member: string_capacity
  rv = ucdr_serialize_uint64_t(cdr, ros_message->string_capacity);
  // Member: nested_type_name
 {
    uint32_t string_len = (ros_message->nested_type_name.data == NULL) ? 0 : (uint32_t)strlen(ros_message->nested_type_name.data) + 1;
    ros_message->nested_type_name.size = (ros_message->nested_type_name.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->nested_type_name.data, string_len);
  }

  return rv;
}

static bool _FieldType__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _FieldType__ros_msg_type * ros_message = (_FieldType__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: type_id
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->type_id);
  // Field name: capacity
  rv = ucdr_deserialize_uint64_t(cdr, &ros_message->capacity);
  // Field name: string_capacity
  rv = ucdr_deserialize_uint64_t(cdr, &ros_message->string_capacity);
  // Field name: nested_type_name
  {
    size_t capacity = ros_message->nested_type_name.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->nested_type_name.data, capacity, &string_size);
    if (rv) {
      ros_message->nested_type_name.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->nested_type_name.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_type_description_interfaces
size_t get_serialized_size_type_description_interfaces__msg__FieldType(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _FieldType__ros_msg_type * ros_message = (const _FieldType__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: type_id
  {
    const size_t item_size = sizeof(ros_message->type_id);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: capacity
  {
    const size_t item_size = sizeof(ros_message->capacity);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: string_capacity
  {
    const size_t item_size = sizeof(ros_message->string_capacity);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: nested_type_name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->nested_type_name.size + 1;

  return current_alignment - initial_alignment;
}

static uint32_t _FieldType__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_type_description_interfaces__msg__FieldType(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_type_description_interfaces
size_t max_serialized_size_type_description_interfaces__msg__FieldType(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: type_id
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: capacity
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + sizeof(uint64_t);
  // Member: string_capacity
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint64_t)) + sizeof(uint64_t);
  // Member: nested_type_name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING);
  current_alignment += 255 + 1;

  return current_alignment - initial_alignment;
}

static size_t _FieldType__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_type_description_interfaces__msg__FieldType(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_FieldType = {
  "type_description_interfaces::msg",
  "FieldType",
  _FieldType__cdr_serialize,
  _FieldType__cdr_deserialize,
  _FieldType__get_serialized_size,
  get_serialized_size_type_description_interfaces__msg__FieldType,
  _FieldType__max_serialized_size
};

static rosidl_message_type_support_t _FieldType__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_FieldType,
  get_message_typesupport_handle_function,

  &type_description_interfaces__msg__FieldType__get_type_hash,
  &type_description_interfaces__msg__FieldType__get_type_description,
  &type_description_interfaces__msg__FieldType__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, type_description_interfaces, msg, FieldType)() {
  return &_FieldType__type_support;
}

#if defined(__cplusplus)
}
#endif
