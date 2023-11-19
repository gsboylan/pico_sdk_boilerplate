/**
 * blink.cpp
*/

#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"

int main() {
    stdio_init_all();
    if (cyw43_arch_init()) {
        printf("Wifi init failed");
        return -1;
    }

    while(true) {
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);
        printf("On!");
        sleep_ms(250);
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
        printf("Off!");
        sleep_ms(250);
        printf("Rerun!");
    }
}