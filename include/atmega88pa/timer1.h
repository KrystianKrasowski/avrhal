#ifndef _AVRHAL_TIMER1_H
#error "Include <avrhal/timer1.h> instead of this file"
#endif

#ifndef _AVRHAL_ATMEGA88PA_TIMER1_H
#define _AVRHAL_ATMEGA88PA_TIMER1_H

#include "avrhal/std.h"
#include <stdint.h>

void
hal_timer1_run(hal_timer_prescaller_t const presc);

void
hal_timer1_set(uint16_t const value);

void
hal_timer1_stop(void);

#endif
