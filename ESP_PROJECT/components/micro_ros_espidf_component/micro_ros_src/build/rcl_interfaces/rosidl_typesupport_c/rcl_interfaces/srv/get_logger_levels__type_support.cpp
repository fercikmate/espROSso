// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from rcl_interfaces:srv/GetLoggerLevels.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rcl_interfaces/srv/detail/get_logger_levels__struct.h"
#include "rcl_interfaces/srv/detail/get_logger_levels__type_support.h"
#include "rcl_interfaces/srv/detail/get_logger_levels__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rcl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetLoggerLevels_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetLoggerLevels_Request_type_support_ids_t;

static const _GetLoggerLevels_Request_type_support_ids_t _GetLoggerLevels_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _GetLoggerLevels_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetLoggerLevels_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetLoggerLevels_Request_type_support_symbol_names_t _GetLoggerLevels_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, GetLoggerLevels_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, GetLoggerLevels_Request)),
  }
};

typedef struct _GetLoggerLevels_Request_type_support_data_t
{
  void * data[2];
} _GetLoggerLevels_Request_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, GetLoggerLevels_Request)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, GetLoggerLevels_Request)();
#ifdef __cplusplus
}
#endif

static _GetLoggerLevels_Request_type_support_data_t _GetLoggerLevels_Request_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, GetLoggerLevels_Request),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, GetLoggerLevels_Request),
  }
};
#else
static _GetLoggerLevels_Request_type_support_data_t _GetLoggerLevels_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _GetLoggerLevels_Request_message_typesupport_map = {
  2,
  "rcl_interfaces",
  &_GetLoggerLevels_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetLoggerLevels_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetLoggerLevels_Request_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t GetLoggerLevels_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetLoggerLevels_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &rcl_interfaces__srv__GetLoggerLevels_Request__get_type_hash,
  &rcl_interfaces__srv__GetLoggerLevels_Request__get_type_description,
  &rcl_interfaces__srv__GetLoggerLevels_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rcl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rcl_interfaces, srv, GetLoggerLevels_Request)() {
  if (!::rcl_interfaces::srv::rosidl_typesupport_c::GetLoggerLevels_Request_message_type_support_handle.typesupport_identifier) {
    ::rcl_interfaces::srv::rosidl_typesupport_c::GetLoggerLevels_Request_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::rcl_interfaces::srv::rosidl_typesupport_c::GetLoggerLevels_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rcl_interfaces/srv/detail/get_logger_levels__struct.h"
// already included above
// #include "rcl_interfaces/srv/detail/get_logger_levels__type_support.h"
// already included above
// #include "rcl_interfaces/srv/detail/get_logger_levels__functions.h"
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

namespace rcl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetLoggerLevels_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetLoggerLevels_Response_type_support_ids_t;

static const _GetLoggerLevels_Response_type_support_ids_t _GetLoggerLevels_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _GetLoggerLevels_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetLoggerLevels_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetLoggerLevels_Response_type_support_symbol_names_t _GetLoggerLevels_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, GetLoggerLevels_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, GetLoggerLevels_Response)),
  }
};

typedef struct _GetLoggerLevels_Response_type_support_data_t
{
  void * data[2];
} _GetLoggerLevels_Response_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, GetLoggerLevels_Response)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, GetLoggerLevels_Response)();
#ifdef __cplusplus
}
#endif

static _GetLoggerLevels_Response_type_support_data_t _GetLoggerLevels_Response_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, GetLoggerLevels_Response),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, GetLoggerLevels_Response),
  }
};
#else
static _GetLoggerLevels_Response_type_support_data_t _GetLoggerLevels_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _GetLoggerLevels_Response_message_typesupport_map = {
  2,
  "rcl_interfaces",
  &_GetLoggerLevels_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetLoggerLevels_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetLoggerLevels_Response_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t GetLoggerLevels_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetLoggerLevels_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &rcl_interfaces__srv__GetLoggerLevels_Response__get_type_hash,
  &rcl_interfaces__srv__GetLoggerLevels_Response__get_type_description,
  &rcl_interfaces__srv__GetLoggerLevels_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rcl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rcl_interfaces, srv, GetLoggerLevels_Response)() {
  if (!::rcl_interfaces::srv::rosidl_typesupport_c::GetLoggerLevels_Response_message_type_support_handle.typesupport_identifier) {
    ::rcl_interfaces::srv::rosidl_typesupport_c::GetLoggerLevels_Response_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::rcl_interfaces::srv::rosidl_typesupport_c::GetLoggerLevels_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rcl_interfaces/srv/detail/get_logger_levels__struct.h"
// already included above
// #include "rcl_interfaces/srv/detail/get_logger_levels__type_support.h"
// already included above
// #include "rcl_interfaces/srv/detail/get_logger_levels__functions.h"
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

namespace rcl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetLoggerLevels_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetLoggerLevels_Event_type_support_ids_t;

static const _GetLoggerLevels_Event_type_support_ids_t _GetLoggerLevels_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _GetLoggerLevels_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetLoggerLevels_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetLoggerLevels_Event_type_support_symbol_names_t _GetLoggerLevels_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, GetLoggerLevels_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, GetLoggerLevels_Event)),
  }
};

typedef struct _GetLoggerLevels_Event_type_support_data_t
{
  void * data[2];
} _GetLoggerLevels_Event_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, GetLoggerLevels_Event)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, GetLoggerLevels_Event)();
#ifdef __cplusplus
}
#endif

static _GetLoggerLevels_Event_type_support_data_t _GetLoggerLevels_Event_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, GetLoggerLevels_Event),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, GetLoggerLevels_Event),
  }
};
#else
static _GetLoggerLevels_Event_type_support_data_t _GetLoggerLevels_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _GetLoggerLevels_Event_message_typesupport_map = {
  2,
  "rcl_interfaces",
  &_GetLoggerLevels_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetLoggerLevels_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetLoggerLevels_Event_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t GetLoggerLevels_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetLoggerLevels_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &rcl_interfaces__srv__GetLoggerLevels_Event__get_type_hash,
  &rcl_interfaces__srv__GetLoggerLevels_Event__get_type_description,
  &rcl_interfaces__srv__GetLoggerLevels_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rcl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, rcl_interfaces, srv, GetLoggerLevels_Event)() {
  if (!::rcl_interfaces::srv::rosidl_typesupport_c::GetLoggerLevels_Event_message_type_support_handle.typesupport_identifier) {
    ::rcl_interfaces::srv::rosidl_typesupport_c::GetLoggerLevels_Event_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::rcl_interfaces::srv::rosidl_typesupport_c::GetLoggerLevels_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rcl_interfaces/srv/detail/get_logger_levels__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace rcl_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _GetLoggerLevels_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetLoggerLevels_type_support_ids_t;

static const _GetLoggerLevels_type_support_ids_t _GetLoggerLevels_service_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _GetLoggerLevels_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetLoggerLevels_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetLoggerLevels_type_support_symbol_names_t _GetLoggerLevels_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, GetLoggerLevels)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, GetLoggerLevels)),
  }
};

typedef struct _GetLoggerLevels_type_support_data_t
{
  void * data[2];
} _GetLoggerLevels_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_service_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, GetLoggerLevels)();
rosidl_service_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, GetLoggerLevels)();
#ifdef __cplusplus
}
#endif

static _GetLoggerLevels_type_support_data_t _GetLoggerLevels_service_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rcl_interfaces, srv, GetLoggerLevels),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, rcl_interfaces, srv, GetLoggerLevels),
  }
};
#else
static _GetLoggerLevels_type_support_data_t _GetLoggerLevels_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _GetLoggerLevels_service_typesupport_map = {
  2,
  "rcl_interfaces",
  &_GetLoggerLevels_service_typesupport_ids.typesupport_identifier[0],
  &_GetLoggerLevels_service_typesupport_symbol_names.symbol_name[0],
  &_GetLoggerLevels_service_typesupport_data.data[0],
};

static rosidl_service_type_support_t GetLoggerLevels_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetLoggerLevels_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GetLoggerLevels_Request_message_type_support_handle,
  &GetLoggerLevels_Response_message_type_support_handle,
  &GetLoggerLevels_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rcl_interfaces,
    srv,
    GetLoggerLevels
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    rcl_interfaces,
    srv,
    GetLoggerLevels
  ),
  &rcl_interfaces__srv__GetLoggerLevels__get_type_hash,
  &rcl_interfaces__srv__GetLoggerLevels__get_type_description,
  &rcl_interfaces__srv__GetLoggerLevels__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace rcl_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, rcl_interfaces, srv, GetLoggerLevels)() {
  if (!::rcl_interfaces::srv::rosidl_typesupport_c::GetLoggerLevels_service_type_support_handle.typesupport_identifier) {
    ::rcl_interfaces::srv::rosidl_typesupport_c::GetLoggerLevels_service_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }
          
  return &::rcl_interfaces::srv::rosidl_typesupport_c::GetLoggerLevels_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
