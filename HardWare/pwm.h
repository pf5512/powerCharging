#ifndef _PWM_H
#define _PWM_H
#include "stm8s.h"

//set PWM state
#define CLOSE_FOUR_PWM                  0x01
#define CLOSE_TWO_PWM                   0x02
#define OPEN_FOUR_PWM                   0x03
#define OPEN_TWO_PWM                    0x04
#define SET_FREQUENCY                   0x05

void pwm_init(void);
void PWM_Handler(u8);

#endif