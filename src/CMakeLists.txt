add_executable(blink blink.cpp)

target_link_libraries(blink 
        pico_stdlib
        pico_cyw43_arch_none
        )

pico_enable_stdio_usb(blink 1)
pico_enable_stdio_uart(blink 0)

pico_add_extra_outputs(blink)
