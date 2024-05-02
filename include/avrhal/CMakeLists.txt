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

add_library(libavrhal INTERFACE ${HEADERS})
target_link_libraries(libavrhal INTERFACE libatmega88pahal)