// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from std_srvs:srv/SetBool.idl
// generated code does not contain a copyright notice
#include "std_srvs/srv/detail/set_bool__rosidl_typesupport_microxrcedds_c.h"
#include "std_srvs/srv/detail/set_bool__functions.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "std_srvs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "std_srvs/srv/detail/set_bool__struct.h"
#include "std_srvs/srv/detail/set_bool__functions.h"

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


typedef std_srvs__srv__SetBool_Request _SetBool_Request__ros_msg_type;

static bool _SetBool_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _SetBool_Request__ros_msg_type * ros_message = (_SetBool_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: data
  rv = ucdr_serialize_bool(cdr, (ros_message->data) ? 0x01 : 0x00);

  return rv;
}

static bool _SetBool_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _SetBool_Request__ros_msg_type * ros_message = (_SetBool_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: data
  rv = ucdr_deserialize_bool(cdr, &ros_message->data);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_std_srvs
size_t get_serialized_size_std_srvs__srv__SetBool_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _SetBool_Request__ros_msg_type * ros_message = (const _SetBool_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: data
  {
    const size_t item_size = sizeof(ros_message->data);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetBool_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_std_srvs__srv__SetBool_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_std_srvs
size_t max_serialized_size_std_srvs__srv__SetBool_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: data
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);

  return current_alignment - initial_alignment;
}

static size_t _SetBool_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_std_srvs__srv__SetBool_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_SetBool_Request = {
  "std_srvs::srv",
  "SetBool_Request",
  _SetBool_Request__cdr_serialize,
  _SetBool_Request__cdr_deserialize,
  _SetBool_Request__get_serialized_size,
  get_serialized_size_std_srvs__srv__SetBool_Request,
  _SetBool_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetBool_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_SetBool_Request,
  get_message_typesupport_handle_function,

  &std_srvs__srv__SetBool_Request__get_type_hash,
  &std_srvs__srv__SetBool_Request__get_type_description,
  &std_srvs__srv__SetBool_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_srvs, srv, SetBool_Request)() {
  return &_SetBool_Request__type_support;
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
// #include "std_srvs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "std_srvs/srv/detail/set_bool__struct.h"
// already included above
// #include "std_srvs/srv/detail/set_bool__functions.h"

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

#include "rosidl_runtime_c/string.h"  // message
#include "rosidl_runtime_c/string_functions.h"  // message

// forward declare type support functions


typedef std_srvs__srv__SetBool_Response _SetBool_Response__ros_msg_type;

static bool _SetBool_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _SetBool_Response__ros_msg_type * ros_message = (_SetBool_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: success
  rv = ucdr_serialize_bool(cdr, (ros_message->success) ? 0x01 : 0x00);
  // Member: message
 {
    uint32_t string_len = (ros_message->message.data == NULL) ? 0 : (uint32_t)strlen(ros_message->message.data) + 1;
    ros_message->message.size = (ros_message->message.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->message.data, string_len);
  }

  return rv;
}

static bool _SetBool_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _SetBool_Response__ros_msg_type * ros_message = (_SetBool_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: success
  rv = ucdr_deserialize_bool(cdr, &ros_message->success);
  // Field name: message
  {
    size_t capacity = ros_message->message.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->message.data, capacity, &string_size);
    if (rv) {
      ros_message->message.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->message.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_std_srvs
size_t get_serialized_size_std_srvs__srv__SetBool_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _SetBool_Response__ros_msg_type * ros_message = (const _SetBool_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: success
  {
    const size_t item_size = sizeof(ros_message->success);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: message
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->message.size + 1;

  return current_alignment - initial_alignment;
}

static uint32_t _SetBool_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_std_srvs__srv__SetBool_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_std_srvs
size_t max_serialized_size_std_srvs__srv__SetBool_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: success
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: message
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static size_t _SetBool_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_std_srvs__srv__SetBool_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_SetBool_Response = {
  "std_srvs::srv",
  "SetBool_Response",
  _SetBool_Response__cdr_serialize,
  _SetBool_Response__cdr_deserialize,
  _SetBool_Response__get_serialized_size,
  get_serialized_size_std_srvs__srv__SetBool_Response,
  _SetBool_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetBool_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_SetBool_Response,
  get_message_typesupport_handle_function,

  &std_srvs__srv__SetBool_Response__get_type_hash,
  &std_srvs__srv__SetBool_Response__get_type_description,
  &std_srvs__srv__SetBool_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_srvs, srv, SetBool_Response)() {
  return &_SetBool_Response__type_support;
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
// #include "std_srvs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "std_srvs/srv/detail/set_bool__struct.h"
// already included above
// #include "std_srvs/srv/detail/set_bool__functions.h"

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
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_std_srvs
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_std_srvs
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_std_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, service_msgs, msg, ServiceEventInfo)();
size_t get_serialized_size_std_srvs__srv__SetBool_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_std_srvs__srv__SetBool_Request(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_srvs, srv, SetBool_Request)();
size_t get_serialized_size_std_srvs__srv__SetBool_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_std_srvs__srv__SetBool_Response(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_srvs, srv, SetBool_Response)();


typedef std_srvs__srv__SetBool_Event _SetBool_Event__ros_msg_type;

static bool _SetBool_Event__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _SetBool_Event__ros_msg_type * ros_message = (_SetBool_Event__ros_msg_type *)(untyped_ros_message);
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
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_srvs, srv, SetBool_Request
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
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_srvs, srv, SetBool_Response
          )()->data))->cdr_serialize(&ros_message->response.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }

  return rv;
}

static bool _SetBool_Event__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _SetBool_Event__ros_msg_type * ros_message = (_SetBool_Event__ros_msg_type *)(untyped_ros_message);
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
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_srvs, srv, SetBool_Request
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
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_srvs, srv, SetBool_Response
        )()->data))->cdr_deserialize(cdr, &ros_message->response.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_std_srvs
size_t get_serialized_size_std_srvs__srv__SetBool_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _SetBool_Event__ros_msg_type * ros_message = (const _SetBool_Event__ros_msg_type *)(untyped_ros_message);
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
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_srvs, srv, SetBool_Request
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
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_srvs, srv, SetBool_Response
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->response.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetBool_Event__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_std_srvs__srv__SetBool_Event(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_std_srvs
size_t max_serialized_size_std_srvs__srv__SetBool_Event(
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

static size_t _SetBool_Event__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_std_srvs__srv__SetBool_Event(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_SetBool_Event = {
  "std_srvs::srv",
  "SetBool_Event",
  _SetBool_Event__cdr_serialize,
  _SetBool_Event__cdr_deserialize,
  _SetBool_Event__get_serialized_size,
  get_serialized_size_std_srvs__srv__SetBool_Event,
  _SetBool_Event__max_serialized_size
};

static rosidl_message_type_support_t _SetBool_Event__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_SetBool_Event,
  get_message_typesupport_handle_function,

  &std_srvs__srv__SetBool_Event__get_type_hash,
  &std_srvs__srv__SetBool_Event__get_type_description,
  &std_srvs__srv__SetBool_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_srvs, srv, SetBool_Event)() {
  return &_SetBool_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "std_srvs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "std_srvs/srv/set_bool.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetBool__callbacks = {
  "std_srvs::srv",
  "SetBool",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_srvs, srv, SetBool_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_srvs, srv, SetBool_Response),
};

static rosidl_service_type_support_t SetBool__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &SetBool__callbacks,
  get_service_typesupport_handle_function,

  &_SetBool_Request__type_support,
  &_SetBool_Response__type_support,
  &_SetBool_Event__type_support,

  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    std_srvs,
    srv,
    SetBool
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    std_srvs,
    srv,
    SetBool
  ),

  &std_srvs__srv__SetBool__get_type_hash,
  &std_srvs__srv__SetBool__get_type_description,
  &std_srvs__srv__SetBool__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, std_srvs, srv, SetBool)() {
  return &SetBool__handle;
}

#if defined(__cplusplus)
}
#endif
