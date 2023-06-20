cmake_minimum_required(VERSION 3.26)
project(mwe_clang_tidy)

option(WITH_CLANG_TIDY "Run clang-tidy within cmake" OFF)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_EXPERIMENTAL_CXX_MODULE_CMAKE_API "2182bf5c-ef0d-489a-91da-49dbc3090d2a")
set(CMAKE_EXPERIMENTAL_CXX_MODULE_DYNDEP TRUE)

set(CMAKE_EXPERIMENTAL_CXX_MODULE_MAP_FORMAT "clang")

if (WITH_CLANG_TIDY)
    set(CMAKE_CXX_CLANG_TIDY clang-tidy)
endif ()

add_executable(mwe_clang_tidy main.cpp)
target_sources(mwe_clang_tidy PUBLIC
        FILE_SET cxx_modules
        TYPE CXX_MODULES FILES
        my_lib.cppm
        )
