// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from nav_msgs:srv/GetPlan.idl
// generated code does not contain a copyright notice
#include "nav_msgs/srv/detail/get_plan__rosidl_typesupport_microxrcedds_c.h"
#include "nav_msgs/srv/detail/get_plan__functions.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "nav_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "nav_msgs/srv/detail/get_plan__struct.h"
#include "nav_msgs/srv/detail/get_plan__functions.h"

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

#include "geometry_msgs/msg/detail/pose_stamped__functions.h"  // goal, start

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_nav_msgs
size_t get_serialized_size_geometry_msgs__msg__PoseStamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_nav_msgs
size_t max_serialized_size_geometry_msgs__msg__PoseStamped(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, PoseStamped)();


typedef nav_msgs__srv__GetPlan_Request _GetPlan_Request__ros_msg_type;

static bool _GetPlan_Request__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _GetPlan_Request__ros_msg_type * ros_message = (_GetPlan_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: start
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, PoseStamped
      )()->data))->cdr_serialize(&ros_message->start, cdr);
  // Member: goal
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, PoseStamped
      )()->data))->cdr_serialize(&ros_message->goal, cdr);
  // Member: tolerance
  rv = ucdr_serialize_float(cdr, ros_message->tolerance);

  return rv;
}

static bool _GetPlan_Request__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _GetPlan_Request__ros_msg_type * ros_message = (_GetPlan_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: start
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, PoseStamped
      )()->data))->cdr_deserialize(cdr, &ros_message->start);
  // Field name: goal
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, geometry_msgs, msg, PoseStamped
      )()->data))->cdr_deserialize(cdr, &ros_message->goal);
  // Field name: tolerance
  rv = ucdr_deserialize_float(cdr, &ros_message->tolerance);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_nav_msgs
size_t get_serialized_size_nav_msgs__srv__GetPlan_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _GetPlan_Request__ros_msg_type * ros_message = (const _GetPlan_Request__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: start
  current_alignment +=
    get_serialized_size_geometry_msgs__msg__PoseStamped(&ros_message->start, current_alignment);
  // Member: goal
  current_alignment +=
    get_serialized_size_geometry_msgs__msg__PoseStamped(&ros_message->goal, current_alignment);
  // Member: tolerance
  {
    const size_t item_size = sizeof(ros_message->tolerance);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetPlan_Request__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_nav_msgs__srv__GetPlan_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_nav_msgs
size_t max_serialized_size_nav_msgs__srv__GetPlan_Request(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: start
  current_alignment +=
    max_serialized_size_geometry_msgs__msg__PoseStamped(full_bounded, current_alignment);
  // Member: goal
  current_alignment +=
    max_serialized_size_geometry_msgs__msg__PoseStamped(full_bounded, current_alignment);
  // Member: tolerance
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);

  return current_alignment - initial_alignment;
}

static size_t _GetPlan_Request__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_nav_msgs__srv__GetPlan_Request(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_GetPlan_Request = {
  "nav_msgs::srv",
  "GetPlan_Request",
  _GetPlan_Request__cdr_serialize,
  _GetPlan_Request__cdr_deserialize,
  _GetPlan_Request__get_serialized_size,
  get_serialized_size_nav_msgs__srv__GetPlan_Request,
  _GetPlan_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetPlan_Request__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_GetPlan_Request,
  get_message_typesupport_handle_function,

  &nav_msgs__srv__GetPlan_Request__get_type_hash,
  &nav_msgs__srv__GetPlan_Request__get_type_description,
  &nav_msgs__srv__GetPlan_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, GetPlan_Request)() {
  return &_GetPlan_Request__type_support;
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
// #include "nav_msgs/srv/detail/get_plan__struct.h"
// already included above
// #include "nav_msgs/srv/detail/get_plan__functions.h"

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

#include "nav_msgs/msg/detail/path__functions.h"  // plan

// forward declare type support functions
size_t get_serialized_size_nav_msgs__msg__Path(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_nav_msgs__msg__Path(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, msg, Path)();


typedef nav_msgs__srv__GetPlan_Response _GetPlan_Response__ros_msg_type;

static bool _GetPlan_Response__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _GetPlan_Response__ros_msg_type * ros_message = (_GetPlan_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: plan
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, msg, Path
      )()->data))->cdr_serialize(&ros_message->plan, cdr);

  return rv;
}

static bool _GetPlan_Response__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _GetPlan_Response__ros_msg_type * ros_message = (_GetPlan_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: plan
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, msg, Path
      )()->data))->cdr_deserialize(cdr, &ros_message->plan);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_nav_msgs
size_t get_serialized_size_nav_msgs__srv__GetPlan_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _GetPlan_Response__ros_msg_type * ros_message = (const _GetPlan_Response__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: plan
  current_alignment +=
    get_serialized_size_nav_msgs__msg__Path(&ros_message->plan, current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GetPlan_Response__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_nav_msgs__srv__GetPlan_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_nav_msgs
size_t max_serialized_size_nav_msgs__srv__GetPlan_Response(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: plan
  current_alignment +=
    max_serialized_size_nav_msgs__msg__Path(full_bounded, current_alignment);

  return current_alignment - initial_alignment;
}

static size_t _GetPlan_Response__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_nav_msgs__srv__GetPlan_Response(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_GetPlan_Response = {
  "nav_msgs::srv",
  "GetPlan_Response",
  _GetPlan_Response__cdr_serialize,
  _GetPlan_Response__cdr_deserialize,
  _GetPlan_Response__get_serialized_size,
  get_serialized_size_nav_msgs__srv__GetPlan_Response,
  _GetPlan_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetPlan_Response__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_GetPlan_Response,
  get_message_typesupport_handle_function,

  &nav_msgs__srv__GetPlan_Response__get_type_hash,
  &nav_msgs__srv__GetPlan_Response__get_type_description,
  &nav_msgs__srv__GetPlan_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, GetPlan_Response)() {
  return &_GetPlan_Response__type_support;
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
// #include "nav_msgs/srv/detail/get_plan__struct.h"
// already included above
// #include "nav_msgs/srv/detail/get_plan__functions.h"

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
size_t get_serialized_size_nav_msgs__srv__GetPlan_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_nav_msgs__srv__GetPlan_Request(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, GetPlan_Request)();
size_t get_serialized_size_nav_msgs__srv__GetPlan_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_nav_msgs__srv__GetPlan_Response(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, GetPlan_Response)();
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


typedef nav_msgs__srv__GetPlan_Event _GetPlan_Event__ros_msg_type;

static bool _GetPlan_Event__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _GetPlan_Event__ros_msg_type * ros_message = (_GetPlan_Event__ros_msg_type *)(untyped_ros_message);
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
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, GetPlan_Request
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
          ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, GetPlan_Response
          )()->data))->cdr_serialize(&ros_message->response.data[i], cdr);
        if(rv == false){
          break;
        }
      }
    }
  }

  return rv;
}

static bool _GetPlan_Event__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _GetPlan_Event__ros_msg_type * ros_message = (_GetPlan_Event__ros_msg_type *)(untyped_ros_message);
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
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, GetPlan_Request
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
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, GetPlan_Response
        )()->data))->cdr_deserialize(cdr, &ros_message->response.data[i]);
      if(rv == false){
        break;
      }
    }
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_nav_msgs
size_t get_serialized_size_nav_msgs__srv__GetPlan_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _GetPlan_Event__ros_msg_type * ros_message = (const _GetPlan_Event__ros_msg_type *)(untyped_ros_message);
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
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, GetPlan_Request
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
        ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, GetPlan_Response
        )()->data))->get_serialized_size_with_initial_alignment(&ros_message->response.data[i], current_alignment);
      uint8_t alignment_size = (element_size < MICROXRCEDDS_PADDING) ? element_size : MICROXRCEDDS_PADDING;
      current_alignment += ucdr_alignment(current_alignment, alignment_size) + element_size;
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetPlan_Event__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_nav_msgs__srv__GetPlan_Event(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_nav_msgs
size_t max_serialized_size_nav_msgs__srv__GetPlan_Event(
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

static size_t _GetPlan_Event__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_nav_msgs__srv__GetPlan_Event(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_GetPlan_Event = {
  "nav_msgs::srv",
  "GetPlan_Event",
  _GetPlan_Event__cdr_serialize,
  _GetPlan_Event__cdr_deserialize,
  _GetPlan_Event__get_serialized_size,
  get_serialized_size_nav_msgs__srv__GetPlan_Event,
  _GetPlan_Event__max_serialized_size
};

static rosidl_message_type_support_t _GetPlan_Event__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_GetPlan_Event,
  get_message_typesupport_handle_function,

  &nav_msgs__srv__GetPlan_Event__get_type_hash,
  &nav_msgs__srv__GetPlan_Event__get_type_description,
  &nav_msgs__srv__GetPlan_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, GetPlan_Event)() {
  return &_GetPlan_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_microxrcedds_c/service_type_support.h"
// already included above
// #include "rosidl_typesupport_microxrcedds_c/identifier.h"
// already included above
// #include "nav_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "nav_msgs/srv/get_plan.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetPlan__callbacks = {
  "nav_msgs::srv",
  "GetPlan",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, GetPlan_Request),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, GetPlan_Response),
};

static rosidl_service_type_support_t GetPlan__handle = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &GetPlan__callbacks,
  get_service_typesupport_handle_function,

  &_GetPlan_Request__type_support,
  &_GetPlan_Response__type_support,
  &_GetPlan_Event__type_support,

  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    nav_msgs,
    srv,
    GetPlan
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    nav_msgs,
    srv,
    GetPlan
  ),

  &nav_msgs__srv__GetPlan__get_type_hash,
  &nav_msgs__srv__GetPlan__get_type_description,
  &nav_msgs__srv__GetPlan__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, nav_msgs, srv, GetPlan)() {
  return &GetPlan__handle;
}

#if defined(__cplusplus)
}
#endif
