cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

project(example_project VERSION 1.0)

add_subdirectory(${PROJECT_SOURCE_DIR}/external/eigen)

find_package(Python3 COMPONENTS Interpreter Development NumPy REQUIRED)

include_directories(${PROJECT_SOURCE_DIR}/external/matplotlib-cpp)
include_directories(${Python_INCLUDE_DIRS})
include_directories(${Python_NumPy_INCLUDE_DIRS})
include_directories(${PROJECT_SOURCE_DIR}/external/eigen)

message(STATUS "PYTHON_EXECUTABLE = ${Python3_EXECUTABLE}")
message(STATUS "PYTHON_INCLUDE_DIRS = ${Python3_INCLUDE_DIRS}")
message(STATUS "NumPy_INCLUDE_DIRS = ${Python3_NumPy_INCLUDE_DIRS}")
message(STATUS "Python_LIBRARIES = ${Python3_LIBRARIES}")

add_executable(${PROJECT_NAME} example.cpp)

target_link_libraries(${PROJECT_NAME} Python3::Python)
target_link_libraries(${PROJECT_NAME} Python3::Module)
target_link_libraries(${PROJECT_NAME} Python3::NumPy)
