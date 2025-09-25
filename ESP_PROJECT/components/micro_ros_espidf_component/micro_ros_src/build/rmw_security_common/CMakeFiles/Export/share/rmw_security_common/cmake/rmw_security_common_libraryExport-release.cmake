#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rmw_security_common::rmw_security_common_library" for configuration "Release"
set_property(TARGET rmw_security_common::rmw_security_common_library APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmw_security_common::rmw_security_common_library PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librmw_security_common.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS rmw_security_common::rmw_security_common_library )
list(APPEND _IMPORT_CHECK_FILES_FOR_rmw_security_common::rmw_security_common_library "${_IMPORT_PREFIX}/lib/librmw_security_common.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
