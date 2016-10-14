project(GLRender)
cmake_minimum_required(VERSION 2.8)
add_definitions(-fno-rtti -fno-exceptions -fno-asynchronous-unwind-tables)

find_package(OpenGL REQUIRED)

file(GLOB SOURCE_FILES
    "*.h"
    "*.cpp"
    "common/*.h"
    "common/*.cpp"
    "math/*.h"
    "math/*.cpp"
    "utils/*.h"
    "utils/*.cpp"
    )

include_directories(OpenGL_IN)

add_library(${PROJECT_NAME} SHARED ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} ${OPENGL_LIBRARY})

add_subdirectory(tests)
