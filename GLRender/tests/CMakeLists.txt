project(GLRender_tests)
cmake_minimum_required(VERSION 2.8)
add_definitions(-fno-rtti -fno-exceptions -fno-asynchronous-unwind-tables)

file(GLOB SOURCE_FILES
    "*.h"
    "*.cpp"
    )
add_executable(${PROJECT_NAME} ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} GLRender)


