// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from nav_msgs:srv/LoadMap.idl
// generated code does not contain a copyright notice
#include "nav_msgs/srv/detail/load_map__rosidl_typesupport_microxrcedds_c.h"
#include "nav_msgs/srv/detail/load_map__functions.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "nav_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "nav_msgs/srv/detail/load_map__struct.h"
#include "nav_msgs/srv/detail/load_map__functions.h"

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

#include "rosidl_runtime_c/string.h"  // map_url
#include "rosidl_runtime_c/string_functions.h"  // map_url

// forward declare type support functions


typedef nav_msgs__srv__LoadMap_Request _LoadMap_Request__ros_msg_type;

static bool _LoadMap_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _LoadMap_Request__ros_msg_type * ros_message = (_LoadMap_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: map_url
 {
    uint32_t string_len = (ros_message->map_url.data == NULL) ? 0 : (uint32_t)strlen(ros_message->map_url.data) + 1;
    ros_message->map_url.size = (ros_message->map_url.data == NULL) ? 0 : string_len - 1 ;
    rv = ucdr_serialize_sequence_char(cdr, ros_message->map_url.data, string_len);
  }

  return rv;
}

static bool _LoadMap_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _LoadMap_Request__ros_msg_type * ros_message = (_LoadMap_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: map_url
  {
    size_t capacity = ros_message->map_url.capacity;
    uint32_t string_size;
    rv = ucdr_deserialize_sequence_char(cdr, ros_message->map_url.data, capacity, &string_size);
    if (rv) {
      ros_message->map_url.size = (string_size == 0) ? 0 : string_size - 1;
    } else if(string_size > capacity){
      cdr->error = false;
      cdr->last_data_size = 1;
      ros_message->map_url.size = 0;
      ucdr_align_to(cdr, sizeof(char));
      ucdr_advance_buffer(cdr, string_size);
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_nav_msgs
size_t get_serialized_size_nav_msgs__srv__LoadMap_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _LoadMap_Request__ros_msg_type * ros_message = (const _LoadMap_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: map_url
  current_alignment += ucdr_alignment(current_alignment, MICROXRCEDDS_PADDING) + MICROXRCEDDS_PADDING;
  current_alignment += ros_message->map_url.size + 1;

  return current_alignment - initial_alignment;
}

static uint32_t _LoadMap_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_nav_msgs__srv__LoadMap_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_nav_msgs
size_t max_serialized_size_nav_msgs__srv__LoadMap_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: map_url
  *full_bounded = false;

  return current_alignment - initial_alignment;
}

static size_t _LoadMap_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_nav_msgs__srv__LoadMap_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_LoadMap_Request = {
  "nav_msgs::srv",
  "LoadMap_Request",
  _LoadMap_Request__cdr_serialize,
  _LoadMap_Request__cdr_deserialize,
  _LoadMap_Request__get_serialized_size,
  get_serialized_size_nav_msgs__srv__LoadMap_Request,
  _LoadMap_Request__max_serialized_size
};

static rosidl_message_type_support_t _LoadMap_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_LoadMap_Request,
  get_message_typesupport_handle_function,

  &nav_msgs__srv__LoadMap_Request__get_type_hash,
  &nav_msgs__srv__LoadMap_Request__get_type_description,
  &nav_msgs__srv__LoadMap_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, LoadMap_Request)() {
  return &_LoadMap_Request__type_support;
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
// #include "nav_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "nav_msgs/srv/detail/load_map__struct.h"
// already included above
// #include "nav_msgs/srv/detail/load_map__functions.h"

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

#include "nav_msgs/msg/detail/occupancy_grid__functions.h"  // map

// forward declare type support functions
size_t get_serialized_size_nav_msgs__msg__OccupancyGrid(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_nav_msgs__msg__OccupancyGrid(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, msg, OccupancyGrid)();


typedef nav_msgs__srv__LoadMap_Response _LoadMap_Response__ros_msg_type;

static bool _LoadMap_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _LoadMap_Response__ros_msg_type * ros_message = (_LoadMap_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: map
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, msg, OccupancyGrid
      )()->data))->cdr_serialize(&ros_message->map, cdr);
  // Member: result
  rv = ucdr_serialize_uint8_t(cdr, ros_message->result);

  return rv;
}

static bool _LoadMap_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _LoadMap_Response__ros_msg_type * ros_message = (_LoadMap_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: map
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, msg, OccupancyGrid
      )()->data))->cdr_deserialize(cdr, &ros_message->map);
  // Field name: result
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->result);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_nav_msgs
size_t get_serialized_size_nav_msgs__srv__LoadMap_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _LoadMap_Response__ros_msg_type * ros_message = (const _LoadMap_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: map
  current_alignment +=
    get_serialized_size_nav_msgs__msg__OccupancyGrid(&ros_message->map, current_alignment);
  // Member: result
  {
    const size_t item_size = sizeof(ros_message->result);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LoadMap_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_nav_msgs__srv__LoadMap_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_nav_msgs
size_t max_serialized_size_nav_msgs__srv__LoadMap_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: map
  current_alignment +=
    max_serialized_size_nav_msgs__msg__OccupancyGrid(full_bounded, current_alignment);
  // Member: result
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);

  return current_alignment - initial_alignment;
}

static size_t _LoadMap_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_nav_msgs__srv__LoadMap_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_LoadMap_Response = {
  "nav_msgs::srv",
  "LoadMap_Response",
  _LoadMap_Response__cdr_serialize,
  _LoadMap_Response__cdr_deserialize,
  _LoadMap_Response__get_serialized_size,
  get_serialized_size_nav_msgs__srv__LoadMap_Response,
  _LoadMap_Response__max_serialized_size
};

static rosidl_message_type_support_t _LoadMap_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_LoadMap_Response,
  get_message_typesupport_handle_function,

  &nav_msgs__srv__LoadMap_Response__get_type_hash,
  &nav_msgs__srv__LoadMap_Response__get_type_description,
  &nav_msgs__srv__LoadMap_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, LoadMap_Response)() {
  return &_LoadMap_Response__type_support;
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
// #include "nav_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
// already included above
// #include "nav_msgs/srv/detail/load_map__struct.h"
// already included above
// #include "nav_msgs/srv/detail/load_map__functions.h"

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
size_t get_serialized_size_nav_msgs__srv__LoadMap_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_nav_msgs__srv__LoadMap_Request(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, LoadMap_Request)();
size_t get_serialized_size_nav_msgs__srv__LoadMap_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_nav_msgs__srv__LoadMap_Response(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, LoadMap_Response)();
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_nav_msgs
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_nav_msgs
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, service_msgs, msg, ServiceEventInfo)();


typedef nav_msgs__srv__LoadMap_Event _LoadMap_Event__ros_msg_type;

static bool _LoadMap_Event__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _LoadMap_Event__ros_msg_type * ros_message = (_LoadMap_Event__ros_msg_type *)(untyped_ros_message);
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
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, LoadMap_Request
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
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, LoadMap_Response
          )()->data))->cdr_serialize(&ros_message->response.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }

  return rv;
}

static bool _LoadMap_Event__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _LoadMap_Event__ros_msg_type * ros_message = (_LoadMap_Event__ros_msg_type *)(untyped_ros_message);
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
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, LoadMap_Request
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
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, LoadMap_Response
        )()->data))->cdr_deserialize(cdr, &ros_message->response.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_nav_msgs
size_t get_serialized_size_nav_msgs__srv__LoadMap_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _LoadMap_Event__ros_msg_type * ros_message = (const _LoadMap_Event__ros_msg_type *)(untyped_ros_message);
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
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, LoadMap_Request
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
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, LoadMap_Response
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->response.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LoadMap_Event__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_nav_msgs__srv__LoadMap_Event(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_nav_msgs
size_t max_serialized_size_nav_msgs__srv__LoadMap_Event(
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

static size_t _LoadMap_Event__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_nav_msgs__srv__LoadMap_Event(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_LoadMap_Event = {
  "nav_msgs::srv",
  "LoadMap_Event",
  _LoadMap_Event__cdr_serialize,
  _LoadMap_Event__cdr_deserialize,
  _LoadMap_Event__get_serialized_size,
  get_serialized_size_nav_msgs__srv__LoadMap_Event,
  _LoadMap_Event__max_serialized_size
};

static rosidl_message_type_support_t _LoadMap_Event__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_LoadMap_Event,
  get_message_typesupport_handle_function,

  &nav_msgs__srv__LoadMap_Event__get_type_hash,
  &nav_msgs__srv__LoadMap_Event__get_type_description,
  &nav_msgs__srv__LoadMap_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, LoadMap_Event)() {
  return &_LoadMap_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "nav_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "nav_msgs/srv/load_map.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t LoadMap__callbacks = {
  "nav_msgs::srv",
  "LoadMap",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, LoadMap_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, LoadMap_Response),
};

static rosidl_service_type_support_t LoadMap__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &LoadMap__callbacks,
  get_service_typesupport_handle_function,

  &_LoadMap_Request__type_support,
  &_LoadMap_Response__type_support,
  &_LoadMap_Event__type_support,

  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    nav_msgs,
    srv,
    LoadMap
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    nav_msgs,
    srv,
    LoadMap
  ),

  &nav_msgs__srv__LoadMap__get_type_hash,
  &nav_msgs__srv__LoadMap__get_type_description,
  &nav_msgs__srv__LoadMap__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, LoadMap)() {
  return &LoadMap__handle;
}

#if defined(__cplusplus)
}
#endif
