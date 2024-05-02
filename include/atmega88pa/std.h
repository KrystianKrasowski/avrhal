#ifndef _AVRHAL_STD_H
#error "Include <avrhal/std.h> instead of this file"
#endif

#ifndef _AVRHAL_ATMEGA88PA_STD_H
#define _AVRHAL_ATMEGA88PA_STD_H

typedef enum
{
    HAL_TIMER_PRESCALLER_NONE,
    HAL_TIMER_PRESCALLER_1,
    HAL_TIMER_PRESCALLER_8,
    HAL_TIMER_PRESCALLER_64,
    HAL_TIMER_PRESCALLER_256,
    HAL_TIMER_PRESCALLER_1024,
} hal_timer_prescaller_t;

#endif
