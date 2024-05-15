cmake_minimum_required(VERSION 3.0.0)
project(checkers_game VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG 33af80a883ddc33d9c0fac0a5b4578301efb18de
)

FetchContent_MakeAvailable(googletest)

add_executable(checkers_game main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
