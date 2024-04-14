#ifndef _AVRHAL_TIMER1_CTC_H
#error "Include <avrhal/timer1_interrupts.h> instead of this file"
#endif

#ifndef _AVRHAL_ATMEGA88PA_TIMER1_INTERRUPTS_H
#define _AVRHAL_ATMEGA88PA_TIMER1_INTERRUPTS_H

#include <stdint.h>

typedef struct
{
    uint8_t timer_overflow   : 1;
    uint8_t output_compare_a : 1;
    uint8_t output_compare_b : 1;
    uint8_t                  : 2;
    uint8_t input_capture    : 1;
    uint8_t                  : 2;
} hal_timer1_interrupts_t;

void
hal_timer1_interrupts_init(hal_timer1_interrupts_t const *interrupts);

__attribute__((weak)) void
hal_timer1_input_capture_isr(uint16_t const value);

__attribute__((weak)) void
hal_timer1_output_compare_a_isr(void);

__attribute__((weak)) void
hal_timer1_output_compare_b_isr(void);

__attribute__((weak)) void
hal_timer1_timer_overflow_isr(void);

#endif
