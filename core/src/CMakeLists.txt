file(GLOB CORE_SRC *.cc)
add_library(core-src STATIC ${CORE_SRC})
target_include_directories(core-src BEFORE PRIVATE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    )
target_include_directories(core-src PUBLIC "${API_DIRNAME}")

