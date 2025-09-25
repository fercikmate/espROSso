// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from type_description_interfaces:msg/TypeSource.idl
// generated code does not contain a copyright notice
#include "type_description_interfaces/msg/detail/type_source__rosidl_typesupport_microxrcedds_c.h"
#include "type_description_interfaces/msg/detail/type_source__functions.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "type_description_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "type_description_interfaces/msg/detail/type_source__struct.h"
#include "type_description_interfaces/msg/detail/type_source__functions.h"

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

#include "rosidl_runtime_c/string.h"  // encoding, raw_file_contents, type_name
#include "rosidl_runtime_c/string_functions.h"  // encoding, raw_file_contents, type_name

// forward declare type support functions


typedef type_description_interfaces__msg__TypeSource _TypeSource__ros_msg_type;

static bool _TypeSource__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _TypeSource__ros_msg_type * ros_message = (_TypeSource__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: type_name
 {
    uint32_t string_len = (ros_message->type_name.data == NULL) ? 0 : (uint32_t)strlen(ros_message->type_name.data) + 1;
    ros_message->type_name.size = (ros_message->type_name.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->type_name.data, string_len);
  }
  // Member: encoding
 {
    uint32_t string_len = (ros_message->encoding.data == NULL) ? 0 : (uint32_t)strlen(ros_message->encoding.data) + 1;
    ros_message->encoding.size = (ros_message->encoding.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->encoding.data, string_len);
  }
  // Member: raw_file_contents
 {
    uint32_t string_len = (ros_message->raw_file_contents.data == NULL) ? 0 : (uint32_t)strlen(ros_message->raw_file_contents.data) + 1;
    ros_message->raw_file_contents.size = (ros_message->raw_file_contents.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->raw_file_contents.data, string_len);
  }

  return rv;
}

static bool _TypeSource__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _TypeSource__ros_msg_type * ros_message = (_TypeSource__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: type_name
  {
    size_t capacity = ros_message->type_name.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->type_name.data, capacity, &string_size);
    if (rv) {
      ros_message->type_name.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->type_name.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: encoding
  {
    size_t capacity = ros_message->encoding.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->encoding.data, capacity, &string_size);
    if (rv) {
      ros_message->encoding.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->encoding.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  // Field name: raw_file_contents
  {
    size_t capacity = ros_message->raw_file_contents.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->raw_file_contents.data, capacity, &string_size);
    if (rv) {
      ros_message->raw_file_contents.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->raw_file_contents.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_type_description_interfaces
size_t get_serialized_size_type_description_interfaces__msg__TypeSource(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _TypeSource__ros_msg_type * ros_message = (const _TypeSource__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: type_name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->type_name.size + 1;
  // Member: encoding
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->encoding.size + 1;
  // Member: raw_file_contents
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->raw_file_contents.size + 1;

  return current_alignment - initial_alignment;
}

static uint32_t _TypeSource__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_type_description_interfaces__msg__TypeSource(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_type_description_interfaces
size_t max_serialized_size_type_description_interfaces__msg__TypeSource(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: type_name
  *full_bounded = false;
  // Member: encoding
  *full_bounded = false;
  // Member: raw_file_contents
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static size_t _TypeSource__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_type_description_interfaces__msg__TypeSource(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_TypeSource = {
  "type_description_interfaces::msg",
  "TypeSource",
  _TypeSource__cdr_serialize,
  _TypeSource__cdr_deserialize,
  _TypeSource__get_serialized_size,
  get_serialized_size_type_description_interfaces__msg__TypeSource,
  _TypeSource__max_serialized_size
};

static rosidl_message_type_support_t _TypeSource__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_TypeSource,
  get_message_typesupport_handle_function,

  &type_description_interfaces__msg__TypeSource__get_type_hash,
  &type_description_interfaces__msg__TypeSource__get_type_description,
  &type_description_interfaces__msg__TypeSource__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, type_description_interfaces, msg, TypeSource)() {
  return &_TypeSource__type_support;
}

#if defined(__cplusplus)
}
#endif
