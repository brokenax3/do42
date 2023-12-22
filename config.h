#pragma once
// #define EE_HANDS

// Pointing Device
#ifdef PS2_DRIVER_BUSYWAIT
#   define PS2_MOUSE_USE_REMOTE_MODE
#   define PS2_CLOCK_PIN   B1
#   define PS2_DATA_PIN    B2
#endif

#ifdef PS2_DRIVER_INTERRUPT
#   define PS2_MOUSE_USE_REMOTE_MODE
#   define PS2_MOUSE_X_MULTIPLIER 2
#   define PS2_MOUSE_Y_MULTIPLIER 2
#   define PS2_CLOCK_PIN   B1
#   define PS2_DATA_PIN    B2

#   define PS2_MOUSE_ROTATE 270
#   define PS2_INT_INIT()  do {  \
        PCMSK0 |= (1<<PCINT1);   \
    } while (0)
#   define PS2_INT_ON()  do {    \
        PCICR |= (1<<PCIE0);\
    } while (0)
#   define PS2_INT_OFF() do {    \
        PCICR &= ~(1<<PCIE0);    \
    } while (0)
#   define PS2_INT_VECT   PCINT0_vect
#endif

#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT
