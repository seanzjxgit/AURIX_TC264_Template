/*
 * Motor.h
 *
 *  Created on: 2026Äê10ÔÂ14ÈÕ
 *      Author: seanz
 */

#ifndef CODE_MOTOR_H_
#define CODE_MOTOR_H_
#include "zf_common_headfile.h"

#define MotorL_turn P21_5
#define MotorL_pwm ATOM0_CH2_P21_4

#define MotorR_turn P21_3
#define MotorR_pwm ATOM0_CH0_P21_2

void Motor_Init(void);
void MotorL_SetSpeed(int pwm);
void MotorR_SetSpeed(int pwm);

#endif /* CODE_MOTOR_H_ */
