cmake_minimum_required(VERSION 3.13)

# initialize the SDK based on PICO_SDK_PATH
# note: this must happen before project()
set(PICO_SDK_FETCH_FROM_GIT on)
include(pico_sdk_import.cmake)
include(pico_extras_import_optional.cmake)

set(PICO_BOARD pico_w)

project(boilerplate)

pico_sdk_init()

add_subdirectory(src)
