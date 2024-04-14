#ifndef _AVRHAL_TIMER1_PWM_H
#error "Include <avrhal/timer1_pwm.h> instead of this file"
#endif

#ifndef _AVRHAL_ATMEGA88PA_TIMER1_PWM_H
#define _AVRHAL_ATMEGA88PA_TIMER1_PWM_H

#include "avrhal/std.h"
#include "avrhal/gpio.h"
#include <stdint.h>

#define HAL_GPIO_OC1A HAL_GPIO_PB1
#define HAL_GPIO_OC1B HAL_GPIO_PB2

typedef enum
{
    HAL_TIMER1_PWM_FAST_8BIT,
    HAL_TIMER1_PWM_PHASE_CORRECT_8BIT
} hal_timer1_pwm_mode_t;

typedef enum
{
    HAL_TIMER1_PWM_CHANNEL_DISCONNECTED,
    HAL_TIMER1_PWM_CHANNEL_TOGGLE_ON_COMPARE,
    HAL_TIMER1_PWM_CHANNEL_NON_INVERTING,
    HAL_TIMER1_PWM_CHANNEL_INVERTING
} hal_timer1_pwm_channel_mode_t;

typedef struct
{
    hal_timer1_pwm_channel_mode_t mode;
    uint8_t                       duty_cycle;
} hal_timer1_pwm_channel_t;

typedef struct
{
    hal_timer1_pwm_mode_t    mode;
    hal_timer1_pwm_channel_t channel_a;
    hal_timer1_pwm_channel_t channel_b;
    hal_timer_prescaller_t   prescaller;
} hal_timer1_pwm_t;

void
hal_timer1_pwm_init(hal_timer1_pwm_t const *pwm);

void
hal_timer1_pwm_run(hal_timer1_pwm_t const *pwm);

void
hal_timer1_pwm_stop(hal_timer1_pwm_t const *pwm);

#endif