#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rosidl_dynamic_typesupport::rosidl_dynamic_typesupport" for configuration "Release"
set_property(TARGET rosidl_dynamic_typesupport::rosidl_dynamic_typesupport APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rosidl_dynamic_typesupport::rosidl_dynamic_typesupport PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librosidl_dynamic_typesupport.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS rosidl_dynamic_typesupport::rosidl_dynamic_typesupport )
list(APPEND _IMPORT_CHECK_FILES_FOR_rosidl_dynamic_typesupport::rosidl_dynamic_typesupport "${_IMPORT_PREFIX}/lib/librosidl_dynamic_typesupport.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
