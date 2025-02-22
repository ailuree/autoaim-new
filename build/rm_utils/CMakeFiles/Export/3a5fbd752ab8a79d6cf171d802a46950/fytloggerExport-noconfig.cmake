#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rm_utils::fytlogger" for configuration ""
set_property(TARGET rm_utils::fytlogger APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(rm_utils::fytlogger PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libfytlogger.so"
  IMPORTED_SONAME_NOCONFIG "libfytlogger.so"
  )

list(APPEND _cmake_import_check_targets rm_utils::fytlogger )
list(APPEND _cmake_import_check_files_for_rm_utils::fytlogger "${_IMPORT_PREFIX}/lib/libfytlogger.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
