// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from service_msgs:msg/ServiceEventInfo.idl
// generated code does not contain a copyright notice
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_microxrcedds_c.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "service_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "service_msgs/msg/detail/service_event_info__struct.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

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

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_service_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_service_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_service_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time)();


typedef service_msgs__msg__ServiceEventInfo _ServiceEventInfo__ros_msg_type;

static bool _ServiceEventInfo__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _ServiceEventInfo__ros_msg_type * ros_message = (_ServiceEventInfo__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: event_type
  rv = ucdr_serialize_uint8_t(cdr, ros_message->event_type);
  // Member: stamp
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_serialize(&ros_message->stamp, cdr);
  // Member: client_gid
  {
    const size_t size = 16;
    rv = ucdr_serialize_array_uint8_t(cdr, ros_message->client_gid, size);
  }
  // Member: sequence_number
  rv = ucdr_serialize_int64_t(cdr, ros_message->sequence_number);

  return rv;
}

static bool _ServiceEventInfo__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _ServiceEventInfo__ros_msg_type * ros_message = (_ServiceEventInfo__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: event_type
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->event_type);
  // Field name: stamp
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_deserialize(cdr, &ros_message->stamp);
  // Field name: client_gid
  {
    const size_t size = 16;
    rv = ucdr_deserialize_array_uint8_t(cdr, ros_message->client_gid, size);
  }
  // Field name: sequence_number
  rv = ucdr_deserialize_int64_t(cdr, &ros_message->sequence_number);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_service_msgs
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _ServiceEventInfo__ros_msg_type * ros_message = (const _ServiceEventInfo__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: event_type
  {
    const size_t item_size = sizeof(ros_message->event_type);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: stamp
  current_alignment +=
    get_serialized_size_builtin_interfaces__msg__Time(&ros_message->stamp, current_alignment);
  // Member: client_gid
  {
    const size_t array_size = 16;
    const size_t item_size = sizeof(ros_message->client_gid[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: sequence_number
  {
    const size_t item_size = sizeof(ros_message->sequence_number);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ServiceEventInfo__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_service_msgs__msg__ServiceEventInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_service_msgs
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: event_type
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: stamp
  current_alignment +=
    max_serialized_size_builtin_interfaces__msg__Time(full_bounded, current_alignment);
  // Member: client_gid
  {
    const size_t array_size = 16;
    current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + (array_size * sizeof(uint8_t));
  }
  // Member: sequence_number
  current_alignment += ucdr_alignment(current_alignment, sizeof(int64_t)) + sizeof(int64_t);

  return current_alignment - initial_alignment;
}

static size_t _ServiceEventInfo__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_service_msgs__msg__ServiceEventInfo(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_ServiceEventInfo = {
  "service_msgs::msg",
  "ServiceEventInfo",
  _ServiceEventInfo__cdr_serialize,
  _ServiceEventInfo__cdr_deserialize,
  _ServiceEventInfo__get_serialized_size,
  get_serialized_size_service_msgs__msg__ServiceEventInfo,
  _ServiceEventInfo__max_serialized_size
};

static rosidl_message_type_support_t _ServiceEventInfo__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_ServiceEventInfo,
  get_message_typesupport_handle_function,

  &service_msgs__msg__ServiceEventInfo__get_type_hash,
  &service_msgs__msg__ServiceEventInfo__get_type_description,
  &service_msgs__msg__ServiceEventInfo__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, service_msgs, msg, ServiceEventInfo)() {
  return &_ServiceEventInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
