cmake_minimum_required(VERSION 3.8)
project(jvm_agent)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp)
add_library(jvm_agent SHARED ${SOURCE_FILES})

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})

find_package(Java)
if (Java_FOUND)
    include_directories(${Java_INCLUDE_DIRS})
    target_link_libraries(jvm_agent ${Java_LIBRARIES})
endif ()

find_package(JNI)
if (JNI_FOUND)
    include_directories(${JNI_INCLUDE_DIRS})
    target_link_libraries(jvm_agent ${JNI_LIBRARIES})
endif ()