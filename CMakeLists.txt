cmake_minimum_required(VERSION 3.16)
project(PhocoeNum)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_THREAD_LIBS_INIT "-lpthread")
set(CORE_DIRNAME "${PROJECT_SOURCE_DIR}/core")
set(API_DIRNAME "${PROJECT_SOURCE_DIR}/include")

include(${PROJECT_SOURCE_DIR}/compiler_options.cmake)

include(CTest)
enable_testing()

add_subdirectory(${CORE_DIRNAME})

find_package(Threads REQUIRED)
