// SPDX-License-Identifier: GPL-3.0-only

#include <ec/gpio.h>

bool gpio_get(Gpio * gpio) __reentrant {
    if (GPIOIN[gpio->index] & gpio->value) {
        return true;
    } else {
        return false;
    }
}

bool gpio_is_set(Gpio * gpio) __reentrant {
    if (GPIOD[gpio->index] & gpio->value) {
        return true;
    } else {
        return false;
    }
}

void gpio_set(Gpio * gpio, bool value) __reentrant {
    if (value) {
        GPIOD[gpio->index] |= gpio->value;
    } else {
        GPIOD[gpio->index] &= ~gpio->value;
    }
}

void gpio_set_function(Gpio * gpio, bool value) __reentrant {
    if (value) {
        GPIOFS[gpio->index] |= gpio->value;
    } else {
        GPIOFS[gpio->index] &= ~gpio->value;
    }
}

void gpio_set_output(Gpio * gpio, bool value) __reentrant {
    if (value) {
        GPIOOE[gpio->index] |= gpio->value;
    } else {
        GPIOOE[gpio->index] &= ~gpio->value;
    }
}