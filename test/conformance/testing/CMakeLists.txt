add_library(ur_testing INTERFACE)
target_include_directories(ur_testing INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
add_library(${PROJECT_NAME}::testing ALIAS ur_testing)
