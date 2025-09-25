// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from type_description_interfaces:msg/IndividualTypeDescription.idl
// generated code does not contain a copyright notice
#include "type_description_interfaces/msg/detail/individual_type_description__rosidl_typesupport_microxrcedds_c.h"
#include "type_description_interfaces/msg/detail/individual_type_description__functions.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "type_description_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "type_description_interfaces/msg/detail/individual_type_description__struct.h"
#include "type_description_interfaces/msg/detail/individual_type_description__functions.h"

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

#include "rosidl_runtime_c/string.h"  // type_name
#include "rosidl_runtime_c/string_functions.h"  // type_name
#include "type_description_interfaces/msg/detail/field__functions.h"  // fields

// forward declare type support functions
size_t get_serialized_size_type_description_interfaces__msg__Field(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_type_description_interfaces__msg__Field(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, type_description_interfaces, msg, Field)();


typedef type_description_interfaces__msg__IndividualTypeDescription _IndividualTypeDescription__ros_msg_type;

static bool _IndividualTypeDescription__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _IndividualTypeDescription__ros_msg_type * ros_message = (_IndividualTypeDescription__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: type_name
 {
    uint32_t string_len = (ros_message->type_name.data == NULL) ? 0 : (uint32_t)strlen(ros_message->type_name.data) + 1;
    ros_message->type_name.size = (ros_message->type_name.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->type_name.data, string_len);
  }
  // Member: fields
  {
    const size_t size = ros_message->fields.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, type_description_interfaces, msg, Field
          )()->data))->cdr_serialize(&ros_message->fields.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }

  return rv;
}

static bool _IndividualTypeDescription__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _IndividualTypeDescription__ros_msg_type * ros_message = (_IndividualTypeDescription__ros_msg_type *)(untyped_ros_message);
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
  // Field name: fields
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->fields.capacity){
      return 0;
    }

    ros_message->fields.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, type_description_interfaces, msg, Field
        )()->data))->cdr_deserialize(cdr, &ros_message->fields.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_type_description_interfaces
size_t get_serialized_size_type_description_interfaces__msg__IndividualTypeDescription(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _IndividualTypeDescription__ros_msg_type * ros_message = (const _IndividualTypeDescription__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: type_name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->type_name.size + 1;
  // Member: fields
  {
    const size_t sequence_size = ros_message->fields.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, type_description_interfaces, msg, Field
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->fields.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _IndividualTypeDescription__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_type_description_interfaces__msg__IndividualTypeDescription(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_type_description_interfaces
size_t max_serialized_size_type_description_interfaces__msg__IndividualTypeDescription(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: type_name
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING);
  current_alignment += 255 + 1;
  // Member: fields
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _IndividualTypeDescription__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_type_description_interfaces__msg__IndividualTypeDescription(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_IndividualTypeDescription = {
  "type_description_interfaces::msg",
  "IndividualTypeDescription",
  _IndividualTypeDescription__cdr_serialize,
  _IndividualTypeDescription__cdr_deserialize,
  _IndividualTypeDescription__get_serialized_size,
  get_serialized_size_type_description_interfaces__msg__IndividualTypeDescription,
  _IndividualTypeDescription__max_serialized_size
};

static rosidl_message_type_support_t _IndividualTypeDescription__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_IndividualTypeDescription,
  get_message_typesupport_handle_function,

  &type_description_interfaces__msg__IndividualTypeDescription__get_type_hash,
  &type_description_interfaces__msg__IndividualTypeDescription__get_type_description,
  &type_description_interfaces__msg__IndividualTypeDescription__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, type_description_interfaces, msg, IndividualTypeDescription)() {
  return &_IndividualTypeDescription__type_support;
}

#if defined(__cplusplus)
}
#endif
