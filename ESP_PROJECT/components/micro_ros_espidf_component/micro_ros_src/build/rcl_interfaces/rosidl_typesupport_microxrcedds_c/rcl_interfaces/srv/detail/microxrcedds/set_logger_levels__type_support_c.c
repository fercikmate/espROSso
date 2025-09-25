// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from rcl_interfaces:srv/SetLoggerLevels.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/srv/detail/set_logger_levels__rosidl_typesupport_microxrcedds_c.h"
#include "rcl_interfaces/srv/detail/set_logger_levels__functions.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rcl_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "rcl_interfaces/srv/detail/set_logger_levels__struct.h"
#include "rcl_interfaces/srv/detail/set_logger_levels__functions.h"

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

#include "rcl_interfaces/msg/detail/logger_level__functions.h"  // levels

// forward declare type support functions
size_t get_serialized_size_rcl_interfaces__msg__LoggerLevel(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rcl_interfaces__msg__LoggerLevel(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, LoggerLevel)();


typedef rcl_interfaces__srv__SetLoggerLevels_Request _SetLoggerLevels_Request__ros_msg_type;

static bool _SetLoggerLevels_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _SetLoggerLevels_Request__ros_msg_type * ros_message = (_SetLoggerLevels_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: levels
  {
    const size_t size = ros_message->levels.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, LoggerLevel
          )()->data))->cdr_serialize(&ros_message->levels.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }

  return rv;
}

static bool _SetLoggerLevels_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _SetLoggerLevels_Request__ros_msg_type * ros_message = (_SetLoggerLevels_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: levels
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->levels.capacity){
      return 0;
    }

    ros_message->levels.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, LoggerLevel
        )()->data))->cdr_deserialize(cdr, &ros_message->levels.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t get_serialized_size_rcl_interfaces__srv__SetLoggerLevels_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _SetLoggerLevels_Request__ros_msg_type * ros_message = (const _SetLoggerLevels_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: levels
  {
    const size_t sequence_size = ros_message->levels.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, LoggerLevel
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->levels.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetLoggerLevels_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_rcl_interfaces__srv__SetLoggerLevels_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t max_serialized_size_rcl_interfaces__srv__SetLoggerLevels_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: levels
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _SetLoggerLevels_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_rcl_interfaces__srv__SetLoggerLevels_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_SetLoggerLevels_Request = {
  "rcl_interfaces::srv",
  "SetLoggerLevels_Request",
  _SetLoggerLevels_Request__cdr_serialize,
  _SetLoggerLevels_Request__cdr_deserialize,
  _SetLoggerLevels_Request__get_serialized_size,
  get_serialized_size_rcl_interfaces__srv__SetLoggerLevels_Request,
  _SetLoggerLevels_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetLoggerLevels_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_SetLoggerLevels_Request,
  get_message_typesupport_handle_function,

  &rcl_interfaces__srv__SetLoggerLevels_Request__get_type_hash,
  &rcl_interfaces__srv__SetLoggerLevels_Request__get_type_description,
  &rcl_interfaces__srv__SetLoggerLevels_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, SetLoggerLevels_Request)() {
  return &_SetLoggerLevels_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <stdint.h>
// already included above
// #include <stdio.h>
// already included above
// #include <string.h>
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "rcl_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "rcl_interfaces/srv/detail/set_logger_levels__struct.h"
// already included above
// #include "rcl_interfaces/srv/detail/set_logger_levels__functions.h"

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

#include "rcl_interfaces/msg/detail/set_logger_levels_result__functions.h"  // results

// forward declare type support functions
size_t get_serialized_size_rcl_interfaces__msg__SetLoggerLevelsResult(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rcl_interfaces__msg__SetLoggerLevelsResult(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, SetLoggerLevelsResult)();


typedef rcl_interfaces__srv__SetLoggerLevels_Response _SetLoggerLevels_Response__ros_msg_type;

static bool _SetLoggerLevels_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _SetLoggerLevels_Response__ros_msg_type * ros_message = (_SetLoggerLevels_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: results
  {
    const size_t size = ros_message->results.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, SetLoggerLevelsResult
          )()->data))->cdr_serialize(&ros_message->results.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }

  return rv;
}

static bool _SetLoggerLevels_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _SetLoggerLevels_Response__ros_msg_type * ros_message = (_SetLoggerLevels_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: results
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->results.capacity){
      return 0;
    }

    ros_message->results.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, SetLoggerLevelsResult
        )()->data))->cdr_deserialize(cdr, &ros_message->results.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t get_serialized_size_rcl_interfaces__srv__SetLoggerLevels_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _SetLoggerLevels_Response__ros_msg_type * ros_message = (const _SetLoggerLevels_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: results
  {
    const size_t sequence_size = ros_message->results.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, msg, SetLoggerLevelsResult
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->results.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetLoggerLevels_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_rcl_interfaces__srv__SetLoggerLevels_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t max_serialized_size_rcl_interfaces__srv__SetLoggerLevels_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: results
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _SetLoggerLevels_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_rcl_interfaces__srv__SetLoggerLevels_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_SetLoggerLevels_Response = {
  "rcl_interfaces::srv",
  "SetLoggerLevels_Response",
  _SetLoggerLevels_Response__cdr_serialize,
  _SetLoggerLevels_Response__cdr_deserialize,
  _SetLoggerLevels_Response__get_serialized_size,
  get_serialized_size_rcl_interfaces__srv__SetLoggerLevels_Response,
  _SetLoggerLevels_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetLoggerLevels_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_SetLoggerLevels_Response,
  get_message_typesupport_handle_function,

  &rcl_interfaces__srv__SetLoggerLevels_Response__get_type_hash,
  &rcl_interfaces__srv__SetLoggerLevels_Response__get_type_description,
  &rcl_interfaces__srv__SetLoggerLevels_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, SetLoggerLevels_Response)() {
  return &_SetLoggerLevels_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <stdint.h>
// already included above
// #include <stdio.h>
// already included above
// #include <string.h>
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
// already included above
// #include "rcl_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "rcl_interfaces/srv/detail/set_logger_levels__struct.h"
// already included above
// #include "rcl_interfaces/srv/detail/set_logger_levels__functions.h"

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

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions
size_t get_serialized_size_rcl_interfaces__srv__SetLoggerLevels_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rcl_interfaces__srv__SetLoggerLevels_Request(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, SetLoggerLevels_Request)();
size_t get_serialized_size_rcl_interfaces__srv__SetLoggerLevels_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rcl_interfaces__srv__SetLoggerLevels_Response(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, SetLoggerLevels_Response)();
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_rcl_interfaces
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_rcl_interfaces
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_rcl_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, service_msgs, msg, ServiceEventInfo)();


typedef rcl_interfaces__srv__SetLoggerLevels_Event _SetLoggerLevels_Event__ros_msg_type;

static bool _SetLoggerLevels_Event__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _SetLoggerLevels_Event__ros_msg_type * ros_message = (_SetLoggerLevels_Event__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: info
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, service_msgs, msg, ServiceEventInfo
      )()->data))->cdr_serialize(&ros_message->info, cdr);
  // Member: request
  {
    const size_t size = ros_message->request.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, SetLoggerLevels_Request
          )()->data))->cdr_serialize(&ros_message->request.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }
  // Member: response
  {
    const size_t size = ros_message->response.size;
    rv = ucdr_serialize_uint32_t(cdr, size);

    if(rv == true){
      for(size_t i = 0; i < size; i++){
        rv = ((const message_type_support_callbacks_t *)(
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, SetLoggerLevels_Response
          )()->data))->cdr_serialize(&ros_message->response.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }

  return rv;
}

static bool _SetLoggerLevels_Event__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _SetLoggerLevels_Event__ros_msg_type * ros_message = (_SetLoggerLevels_Event__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: info
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, service_msgs, msg, ServiceEventInfo
      )()->data))->cdr_deserialize(cdr, &ros_message->info);
  // Field name: request
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->request.capacity){
      return 0;
    }

    ros_message->request.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, SetLoggerLevels_Request
        )()->data))->cdr_deserialize(cdr, &ros_message->request.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  // Field name: response
  {
    uint32_t size;
    rv = ucdr_deserialize_uint32_t(cdr, &size);

    if(size > ros_message->response.capacity){
      return 0;
    }

    ros_message->response.size = size;
    for(size_t i = 0; i < size; i++){
      rv = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, SetLoggerLevels_Response
        )()->data))->cdr_deserialize(cdr, &ros_message->response.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t get_serialized_size_rcl_interfaces__srv__SetLoggerLevels_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _SetLoggerLevels_Event__ros_msg_type * ros_message = (const _SetLoggerLevels_Event__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: info
  current_alignment +=
    get_serialized_size_service_msgs__msg__ServiceEventInfo(&ros_message->info, current_alignment);
  // Member: request
  {
    const size_t sequence_size = ros_message->request.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, SetLoggerLevels_Request
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->request.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }
  // Member: response
  {
    const size_t sequence_size = ros_message->response.size;

    current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;

    for(size_t i = 0; i < sequence_size; i++){
      size_t element_size = ((const message_type_support_callbacks_t *)(
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, SetLoggerLevels_Response
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->response.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetLoggerLevels_Event__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_rcl_interfaces__srv__SetLoggerLevels_Event(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_rcl_interfaces
size_t max_serialized_size_rcl_interfaces__srv__SetLoggerLevels_Event(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: info
  current_alignment +=
    max_serialized_size_service_msgs__msg__ServiceEventInfo(full_bounded, current_alignment);
  // Member: request
  {
    *full_bounded = false;
  }
  // Member: response
  {
    *full_bounded = false;
  }

  return current_alignment - initial_alignment;
}

static size_t _SetLoggerLevels_Event__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_rcl_interfaces__srv__SetLoggerLevels_Event(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_SetLoggerLevels_Event = {
  "rcl_interfaces::srv",
  "SetLoggerLevels_Event",
  _SetLoggerLevels_Event__cdr_serialize,
  _SetLoggerLevels_Event__cdr_deserialize,
  _SetLoggerLevels_Event__get_serialized_size,
  get_serialized_size_rcl_interfaces__srv__SetLoggerLevels_Event,
  _SetLoggerLevels_Event__max_serialized_size
};

static rosidl_message_type_support_t _SetLoggerLevels_Event__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_SetLoggerLevels_Event,
  get_message_typesupport_handle_function,

  &rcl_interfaces__srv__SetLoggerLevels_Event__get_type_hash,
  &rcl_interfaces__srv__SetLoggerLevels_Event__get_type_description,
  &rcl_interfaces__srv__SetLoggerLevels_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, SetLoggerLevels_Event)() {
  return &_SetLoggerLevels_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "rcl_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "rcl_interfaces/srv/set_logger_levels.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetLoggerLevels__callbacks = {
  "rcl_interfaces::srv",
  "SetLoggerLevels",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, SetLoggerLevels_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, SetLoggerLevels_Response),
};

static rosidl_service_type_support_t SetLoggerLevels__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &SetLoggerLevels__callbacks,
  get_service_typesupport_handle_function,

  &_SetLoggerLevels_Request__type_support,
  &_SetLoggerLevels_Response__type_support,
  &_SetLoggerLevels_Event__type_support,

  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rcl_interfaces,
    srv,
    SetLoggerLevels
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rcl_interfaces,
    srv,
    SetLoggerLevels
  ),

  &rcl_interfaces__srv__SetLoggerLevels__get_type_hash,
  &rcl_interfaces__srv__SetLoggerLevels__get_type_description,
  &rcl_interfaces__srv__SetLoggerLevels__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, SetLoggerLevels)() {
  return &SetLoggerLevels__handle;
}

#if defined(__cplusplus)
}
#endif
