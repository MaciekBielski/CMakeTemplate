set(CMAKE_VERBOSE_MAKEFILE ON)

find_package(PkgConfig REQUIRED)
pkg_check_modules(LIBGTEST REQUIRED gtest)
pkg_check_modules(LIBGTEST_MAIN REQUIRED gtest_main)
pkg_check_modules(LIBGMOCK REQUIRED gmock)
pkg_check_modules(LIBGMOCK_MAIN REQUIRED gmock_main)

file(GLOB CORE_TESTS *.cc)
add_executable(core-tests ${CORE_TESTS} $<TARGET_OBJECTS:core-src>)
add_test(NAME core-tests COMMAND core-tests)
target_include_directories(core-tests BEFORE PRIVATE $<TARGET_PROPERTY:core-src,INCLUDE_DIRECTORIES>)
target_include_directories(core-tests SYSTEM PRIVATE
    ${LIBGTEST_INCLUDE_DIRS}
    ${LIBGTEST_MAIN_INCLUDE_DIRS}
    ${LIBGMOCK_INCLUDE_DIRS}
    )
target_compile_options(core-tests PRIVATE
    ${LIBGTEST_CFLAGS_OTHER}
    ${LIBGTEST_MAIN_CFLAGS_OTHER}
    ${LIBGMOCK_CFLAGS_OTHER}
    )
target_link_libraries(core-tests PRIVATE
    ${LIBGTEST_LDFLAGS}
    ${LIBGTEST_MAIN_LDFLAGS}
    ${LIBGMOCK_LDFLAGS}
    )

