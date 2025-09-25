// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from type_description_interfaces:srv/GetTypeDescription.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "type_description_interfaces/srv/detail/get_type_description__struct.h"
#include "type_description_interfaces/srv/detail/get_type_description__type_support.h"
#include "type_description_interfaces/srv/detail/get_type_description__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace type_description_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetTypeDescription_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetTypeDescription_Request_type_support_ids_t;

static const _GetTypeDescription_Request_type_support_ids_t _GetTypeDescription_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _GetTypeDescription_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetTypeDescription_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetTypeDescription_Request_type_support_symbol_names_t _GetTypeDescription_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, type_description_interfaces, srv, GetTypeDescription_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, type_description_interfaces, srv, GetTypeDescription_Request)),
  }
};

typedef struct _GetTypeDescription_Request_type_support_data_t
{
  void * data[2];
} _GetTypeDescription_Request_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, type_description_interfaces, srv, GetTypeDescription_Request)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, type_description_interfaces, srv, GetTypeDescription_Request)();
#ifdef __cplusplus
}
#endif

static _GetTypeDescription_Request_type_support_data_t _GetTypeDescription_Request_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, type_description_interfaces, srv, GetTypeDescription_Request),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, type_description_interfaces, srv, GetTypeDescription_Request),
  }
};
#else
static _GetTypeDescription_Request_type_support_data_t _GetTypeDescription_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _GetTypeDescription_Request_message_typesupport_map = {
  2,
  "type_description_interfaces",
  &_GetTypeDescription_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetTypeDescription_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetTypeDescription_Request_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t GetTypeDescription_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetTypeDescription_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &type_description_interfaces__srv__GetTypeDescription_Request__get_type_hash,
  &type_description_interfaces__srv__GetTypeDescription_Request__get_type_description,
  &type_description_interfaces__srv__GetTypeDescription_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace type_description_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, type_description_interfaces, srv, GetTypeDescription_Request)() {
  if (!::type_description_interfaces::srv::rosidl_typesupport_c::GetTypeDescription_Request_message_type_support_handle.typesupport_identifier) {
    ::type_description_interfaces::srv::rosidl_typesupport_c::GetTypeDescription_Request_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::type_description_interfaces::srv::rosidl_typesupport_c::GetTypeDescription_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "type_description_interfaces/srv/detail/get_type_description__struct.h"
// already included above
// #include "type_description_interfaces/srv/detail/get_type_description__type_support.h"
// already included above
// #include "type_description_interfaces/srv/detail/get_type_description__functions.h"
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

namespace type_description_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetTypeDescription_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetTypeDescription_Response_type_support_ids_t;

static const _GetTypeDescription_Response_type_support_ids_t _GetTypeDescription_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _GetTypeDescription_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetTypeDescription_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetTypeDescription_Response_type_support_symbol_names_t _GetTypeDescription_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, type_description_interfaces, srv, GetTypeDescription_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, type_description_interfaces, srv, GetTypeDescription_Response)),
  }
};

typedef struct _GetTypeDescription_Response_type_support_data_t
{
  void * data[2];
} _GetTypeDescription_Response_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, type_description_interfaces, srv, GetTypeDescription_Response)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, type_description_interfaces, srv, GetTypeDescription_Response)();
#ifdef __cplusplus
}
#endif

static _GetTypeDescription_Response_type_support_data_t _GetTypeDescription_Response_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, type_description_interfaces, srv, GetTypeDescription_Response),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, type_description_interfaces, srv, GetTypeDescription_Response),
  }
};
#else
static _GetTypeDescription_Response_type_support_data_t _GetTypeDescription_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _GetTypeDescription_Response_message_typesupport_map = {
  2,
  "type_description_interfaces",
  &_GetTypeDescription_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetTypeDescription_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetTypeDescription_Response_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t GetTypeDescription_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetTypeDescription_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &type_description_interfaces__srv__GetTypeDescription_Response__get_type_hash,
  &type_description_interfaces__srv__GetTypeDescription_Response__get_type_description,
  &type_description_interfaces__srv__GetTypeDescription_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace type_description_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, type_description_interfaces, srv, GetTypeDescription_Response)() {
  if (!::type_description_interfaces::srv::rosidl_typesupport_c::GetTypeDescription_Response_message_type_support_handle.typesupport_identifier) {
    ::type_description_interfaces::srv::rosidl_typesupport_c::GetTypeDescription_Response_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::type_description_interfaces::srv::rosidl_typesupport_c::GetTypeDescription_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "type_description_interfaces/srv/detail/get_type_description__struct.h"
// already included above
// #include "type_description_interfaces/srv/detail/get_type_description__type_support.h"
// already included above
// #include "type_description_interfaces/srv/detail/get_type_description__functions.h"
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

namespace type_description_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetTypeDescription_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetTypeDescription_Event_type_support_ids_t;

static const _GetTypeDescription_Event_type_support_ids_t _GetTypeDescription_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _GetTypeDescription_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetTypeDescription_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetTypeDescription_Event_type_support_symbol_names_t _GetTypeDescription_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, type_description_interfaces, srv, GetTypeDescription_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, type_description_interfaces, srv, GetTypeDescription_Event)),
  }
};

typedef struct _GetTypeDescription_Event_type_support_data_t
{
  void * data[2];
} _GetTypeDescription_Event_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, type_description_interfaces, srv, GetTypeDescription_Event)();
rosidl_message_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, type_description_interfaces, srv, GetTypeDescription_Event)();
#ifdef __cplusplus
}
#endif

static _GetTypeDescription_Event_type_support_data_t _GetTypeDescription_Event_message_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, type_description_interfaces, srv, GetTypeDescription_Event),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, type_description_interfaces, srv, GetTypeDescription_Event),
  }
};
#else
static _GetTypeDescription_Event_type_support_data_t _GetTypeDescription_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _GetTypeDescription_Event_message_typesupport_map = {
  2,
  "type_description_interfaces",
  &_GetTypeDescription_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetTypeDescription_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetTypeDescription_Event_message_typesupport_data.data[0],
};

static rosidl_message_type_support_t GetTypeDescription_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetTypeDescription_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &type_description_interfaces__srv__GetTypeDescription_Event__get_type_hash,
  &type_description_interfaces__srv__GetTypeDescription_Event__get_type_description,
  &type_description_interfaces__srv__GetTypeDescription_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace type_description_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, type_description_interfaces, srv, GetTypeDescription_Event)() {
  if (!::type_description_interfaces::srv::rosidl_typesupport_c::GetTypeDescription_Event_message_type_support_handle.typesupport_identifier) {
    ::type_description_interfaces::srv::rosidl_typesupport_c::GetTypeDescription_Event_message_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }

  return &::type_description_interfaces::srv::rosidl_typesupport_c::GetTypeDescription_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "type_description_interfaces/srv/detail/get_type_description__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace type_description_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _GetTypeDescription_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetTypeDescription_type_support_ids_t;

static const _GetTypeDescription_type_support_ids_t _GetTypeDescription_service_typesupport_ids = {
  {
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    "rosidl_typesupport_microxrcedds_c",  // ::rosidl_typesupport_microxrcedds_c::typesupport_identifier,
  }
};

typedef struct _GetTypeDescription_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetTypeDescription_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetTypeDescription_type_support_symbol_names_t _GetTypeDescription_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, type_description_interfaces, srv, GetTypeDescription)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, type_description_interfaces, srv, GetTypeDescription)),
  }
};

typedef struct _GetTypeDescription_type_support_data_t
{
  void * data[2];
} _GetTypeDescription_type_support_data_t;

#ifdef ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT
#ifdef __cplusplus
extern "C"
{
#endif
rosidl_service_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, type_description_interfaces, srv, GetTypeDescription)();
rosidl_service_type_support_t * ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, type_description_interfaces, srv, GetTypeDescription)();
#ifdef __cplusplus
}
#endif

static _GetTypeDescription_type_support_data_t _GetTypeDescription_service_typesupport_data = {
  {
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, type_description_interfaces, srv, GetTypeDescription),
    (void*) ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, type_description_interfaces, srv, GetTypeDescription),
  }
};
#else
static _GetTypeDescription_type_support_data_t _GetTypeDescription_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};
#endif // ROSIDL_TYPESUPPORT_STATIC_TYPESUPPORT

static const type_support_map_t _GetTypeDescription_service_typesupport_map = {
  2,
  "type_description_interfaces",
  &_GetTypeDescription_service_typesupport_ids.typesupport_identifier[0],
  &_GetTypeDescription_service_typesupport_symbol_names.symbol_name[0],
  &_GetTypeDescription_service_typesupport_data.data[0],
};

static rosidl_service_type_support_t GetTypeDescription_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetTypeDescription_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GetTypeDescription_Request_message_type_support_handle,
  &GetTypeDescription_Response_message_type_support_handle,
  &GetTypeDescription_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    type_description_interfaces,
    srv,
    GetTypeDescription
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    type_description_interfaces,
    srv,
    GetTypeDescription
  ),
  &type_description_interfaces__srv__GetTypeDescription__get_type_hash,
  &type_description_interfaces__srv__GetTypeDescription__get_type_description,
  &type_description_interfaces__srv__GetTypeDescription__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace type_description_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, type_description_interfaces, srv, GetTypeDescription)() {
  if (!::type_description_interfaces::srv::rosidl_typesupport_c::GetTypeDescription_service_type_support_handle.typesupport_identifier) {
    ::type_description_interfaces::srv::rosidl_typesupport_c::GetTypeDescription_service_type_support_handle.typesupport_identifier =
    rosidl_typesupport_c__typesupport_identifier;
  }
          
  return &::type_description_interfaces::srv::rosidl_typesupport_c::GetTypeDescription_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
