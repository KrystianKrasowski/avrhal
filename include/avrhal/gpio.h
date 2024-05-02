#ifndef _AVRHAL_GPIO_H
#define _AVRHAL_GPIO_H

#if defined (__AVR_ATmega88PA__)
#include <atmega88pa/gpio.h>
#else
#error "Device type is not defined"
#endif

#endif