// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from type_description_interfaces:msg/TypeDescription.idl
// generated code does not contain a copyright notice
#include "type_description_interfaces/msg/detail/type_description__rosidl_typesupport_microxrcedds_c.h"
#include "type_description_interfaces/msg/detail/type_description__functions.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "type_description_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "type_description_interfaces/msg/detail/type_description__struct.h"
#include "type_description_interfaces/msg/detail/type_description__functions.h"

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

#include "type_description_interfaces/msg/detail/individual_type_description__functions.h"  // referenced_type_descriptions, type_description

// forward declare type support functions
size_t get_serialized_size_type_description_interfaces__msg__IndividualTypeDescription(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_type_description_interfaces__msg__IndividualTypeDescription(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, type_description_interfaces, msg, IndividualTypeDescription)();


typedef type_description_interfaces__msg__TypeDescription _TypeDescription__ros_msg_type;

static bool _TypeDescription__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _TypeDescription__ros_msg_type * ros_message = (_TypeDescription__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: type_description
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, type_description_interfaces, msg, IndividualTypeDescription
      )()->data))->cdr_serialize(&ros_message->type_description, cdr);
  // Member: referenced_type_descriptions
  {
    const size_t size = ros_message->referenced_type_descriptions.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, type_description_interfaces, msg, IndividualTypeDescription
          )()->data))->cdr_serialize(&ros_message->referenced_type_descriptions.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }

  return rv;
}

static bool _TypeDescription__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _TypeDescription__ros_msg_type * ros_message = (_TypeDescription__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: type_description
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, type_description_interfaces, msg, IndividualTypeDescription
      )()->data))->cdr_deserialize(cdr, &ros_message->type_description);
  // Field name: referenced_type_descriptions
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->referenced_type_descriptions.capacity){
      return 0;
    }

    ros_message->referenced_type_descriptions.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, type_description_interfaces, msg, IndividualTypeDescription
        )()->data))->cdr_deserialize(cdr, &ros_message->referenced_type_descriptions.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_type_description_interfaces
size_t get_serialized_size_type_description_interfaces__msg__TypeDescription(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _TypeDescription__ros_msg_type * ros_message = (const _TypeDescription__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: type_description
  current_alignment +=
    get_serialized_size_type_description_interfaces__msg__IndividualTypeDescription(&ros_message->type_description, current_alignment);
  // Member: referenced_type_descriptions
  {
    const size_t sequence_size = ros_message->referenced_type_descriptions.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, type_description_interfaces, msg, IndividualTypeDescription
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->referenced_type_descriptions.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TypeDescription__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_type_description_interfaces__msg__TypeDescription(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_type_description_interfaces
size_t max_serialized_size_type_description_interfaces__msg__TypeDescription(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: type_description
  current_alignment +=
    max_serialized_size_type_description_interfaces__msg__IndividualTypeDescription(full_bounded, current_alignment);
  // Member: referenced_type_descriptions
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _TypeDescription__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_type_description_interfaces__msg__TypeDescription(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_TypeDescription = {
  "type_description_interfaces::msg",
  "TypeDescription",
  _TypeDescription__cdr_serialize,
  _TypeDescription__cdr_deserialize,
  _TypeDescription__get_serialized_size,
  get_serialized_size_type_description_interfaces__msg__TypeDescription,
  _TypeDescription__max_serialized_size
};

static rosidl_message_type_support_t _TypeDescription__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_TypeDescription,
  get_message_typesupport_handle_function,

  &type_description_interfaces__msg__TypeDescription__get_type_hash,
  &type_description_interfaces__msg__TypeDescription__get_type_description,
  &type_description_interfaces__msg__TypeDescription__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, type_description_interfaces, msg, TypeDescription)() {
  return &_TypeDescription__type_support;
}

#if defined(__cplusplus)
}
#endif
