set(HEADERS
    gpio.h
    spi.h
    std.h
    timer0_pwm.h
    timer0.h
    timer1_ctc.h
    timer1_pwm.h
    timer1.h
)

add_library(libatmega88pahal INTERFACE ${HEADERS})