// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from sensor_msgs:srv/SetCameraInfo.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "sensor_msgs/srv/detail/set_camera_info__struct.h"
#include "sensor_msgs/srv/detail/set_camera_info__type_support.h"
#include "sensor_msgs/srv/detail/set_camera_info__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace sensor_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetCameraInfo_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCameraInfo_Request_type_support_ids_t;

static const _SetCameraInfo_Request_type_support_ids_t _SetCameraInfo_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _SetCameraInfo_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCameraInfo_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCameraInfo_Request_type_support_symbol_names_t _SetCameraInfo_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, srv, SetCameraInfo_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, srv, SetCameraInfo_Request)),
  }
};

typedef struct _SetCameraInfo_Request_type_support_data_t
{
  void * data[2];
} _SetCameraInfo_Request_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, srv, SetCameraInfo_Request)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, srv, SetCameraInfo_Request)();
#ifdef __cplusplus
}
#endif

static _SetCameraInfo_Request_type_support_data_t _SetCameraInfo_Request_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, srv, SetCameraInfo_Request),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, srv, SetCameraInfo_Request),
  }
};
#else
static _SetCameraInfo_Request_type_support_data_t _SetCameraInfo_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _SetCameraInfo_Request_message_typesupport_map = {
  2,
  "sensor_msgs",
  &_SetCameraInfo_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetCameraInfo_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetCameraInfo_Request_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t SetCameraInfo_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCameraInfo_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &sensor_msgs__srv__SetCameraInfo_Request__get_type_hash,
  &sensor_msgs__srv__SetCameraInfo_Request__get_type_description,
  &sensor_msgs__srv__SetCameraInfo_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace sensor_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, sensor_msgs, srv, SetCameraInfo_Request)() {
  if (!::sensor_msgs::srv::rosidl_typesupport_c::SetCameraInfo_Request_message_type_support_handle.typesupport_identifier) {
    ::sensor_msgs::srv::rosidl_typesupport_c::SetCameraInfo_Request_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::sensor_msgs::srv::rosidl_typesupport_c::SetCameraInfo_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "sensor_msgs/srv/detail/set_camera_info__struct.h"
// already included above
// #include "sensor_msgs/srv/detail/set_camera_info__type_support.h"
// already included above
// #include "sensor_msgs/srv/detail/set_camera_info__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sensor_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetCameraInfo_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCameraInfo_Response_type_support_ids_t;

static const _SetCameraInfo_Response_type_support_ids_t _SetCameraInfo_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _SetCameraInfo_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCameraInfo_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCameraInfo_Response_type_support_symbol_names_t _SetCameraInfo_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, srv, SetCameraInfo_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, srv, SetCameraInfo_Response)),
  }
};

typedef struct _SetCameraInfo_Response_type_support_data_t
{
  void * data[2];
} _SetCameraInfo_Response_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, srv, SetCameraInfo_Response)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, srv, SetCameraInfo_Response)();
#ifdef __cplusplus
}
#endif

static _SetCameraInfo_Response_type_support_data_t _SetCameraInfo_Response_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, srv, SetCameraInfo_Response),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, srv, SetCameraInfo_Response),
  }
};
#else
static _SetCameraInfo_Response_type_support_data_t _SetCameraInfo_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _SetCameraInfo_Response_message_typesupport_map = {
  2,
  "sensor_msgs",
  &_SetCameraInfo_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetCameraInfo_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetCameraInfo_Response_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t SetCameraInfo_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCameraInfo_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &sensor_msgs__srv__SetCameraInfo_Response__get_type_hash,
  &sensor_msgs__srv__SetCameraInfo_Response__get_type_description,
  &sensor_msgs__srv__SetCameraInfo_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace sensor_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, sensor_msgs, srv, SetCameraInfo_Response)() {
  if (!::sensor_msgs::srv::rosidl_typesupport_c::SetCameraInfo_Response_message_type_support_handle.typesupport_identifier) {
    ::sensor_msgs::srv::rosidl_typesupport_c::SetCameraInfo_Response_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::sensor_msgs::srv::rosidl_typesupport_c::SetCameraInfo_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "sensor_msgs/srv/detail/set_camera_info__struct.h"
// already included above
// #include "sensor_msgs/srv/detail/set_camera_info__type_support.h"
// already included above
// #include "sensor_msgs/srv/detail/set_camera_info__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sensor_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetCameraInfo_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCameraInfo_Event_type_support_ids_t;

static const _SetCameraInfo_Event_type_support_ids_t _SetCameraInfo_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _SetCameraInfo_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCameraInfo_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCameraInfo_Event_type_support_symbol_names_t _SetCameraInfo_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, srv, SetCameraInfo_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, srv, SetCameraInfo_Event)),
  }
};

typedef struct _SetCameraInfo_Event_type_support_data_t
{
  void * data[2];
} _SetCameraInfo_Event_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, srv, SetCameraInfo_Event)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, srv, SetCameraInfo_Event)();
#ifdef __cplusplus
}
#endif

static _SetCameraInfo_Event_type_support_data_t _SetCameraInfo_Event_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, srv, SetCameraInfo_Event),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, srv, SetCameraInfo_Event),
  }
};
#else
static _SetCameraInfo_Event_type_support_data_t _SetCameraInfo_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _SetCameraInfo_Event_message_typesupport_map = {
  2,
  "sensor_msgs",
  &_SetCameraInfo_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetCameraInfo_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetCameraInfo_Event_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t SetCameraInfo_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCameraInfo_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &sensor_msgs__srv__SetCameraInfo_Event__get_type_hash,
  &sensor_msgs__srv__SetCameraInfo_Event__get_type_description,
  &sensor_msgs__srv__SetCameraInfo_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace sensor_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, sensor_msgs, srv, SetCameraInfo_Event)() {
  if (!::sensor_msgs::srv::rosidl_typesupport_c::SetCameraInfo_Event_message_type_support_handle.typesupport_identifier) {
    ::sensor_msgs::srv::rosidl_typesupport_c::SetCameraInfo_Event_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::sensor_msgs::srv::rosidl_typesupport_c::SetCameraInfo_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "sensor_msgs/srv/detail/set_camera_info__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace sensor_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SetCameraInfo_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCameraInfo_type_support_ids_t;

static const _SetCameraInfo_type_support_ids_t _SetCameraInfo_service_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _SetCameraInfo_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCameraInfo_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCameraInfo_type_support_symbol_names_t _SetCameraInfo_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, srv, SetCameraInfo)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, srv, SetCameraInfo)),
  }
};

typedef struct _SetCameraInfo_type_support_data_t
{
  void * data[2];
} _SetCameraInfo_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_service_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, srv, SetCameraInfo)();
rosidl_service_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, srv, SetCameraInfo)();
#ifdef __cplusplus
}
#endif

static _SetCameraInfo_type_support_data_t _SetCameraInfo_service_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, srv, SetCameraInfo),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, sensor_msgs, srv, SetCameraInfo),
  }
};
#else
static _SetCameraInfo_type_support_data_t _SetCameraInfo_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _SetCameraInfo_service_typesupport_map = {
  2,
  "sensor_msgs",
  &_SetCameraInfo_service_typesupport_ids.typesupport_identifier[0],
  &_SetCameraInfo_service_typesupport_symbol_names.symbol_name[0],
  &_SetCameraInfo_service_typesupport_data.data[0],
};

static rosidl_service_type_support_t SetCameraInfo_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCameraInfo_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SetCameraInfo_Request_message_type_support_handle,
  &SetCameraInfo_Response_message_type_support_handle,
  &SetCameraInfo_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    sensor_msgs,
    srv,
    SetCameraInfo
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    sensor_msgs,
    srv,
    SetCameraInfo
  ),
  &sensor_msgs__srv__SetCameraInfo__get_type_hash,
  &sensor_msgs__srv__SetCameraInfo__get_type_description,
  &sensor_msgs__srv__SetCameraInfo__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace sensor_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, sensor_msgs, srv, SetCameraInfo)() {
  if (!::sensor_msgs::srv::rosidl_typesupport_c::SetCameraInfo_service_type_support_handle.typesupport_identifier) {
    ::sensor_msgs::srv::rosidl_typesupport_c::SetCameraInfo_service_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }
          
  return &::sensor_msgs::srv::rosidl_typesupport_c::SetCameraInfo_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
