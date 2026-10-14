/*
 * Servo.h
 *
 *  Created on: 2026Äê10ÔÂ14ÈÕ
 *      Author: seanz
 */

#ifndef CODE_SERVO_H_
#define CODE_SERVO_H_
#include "zf_common_headfile.h"

#define SERVO_PWMMID 400

extern uint16 pwm;

void Servo_Init(void);
void Servo_Ctrl(uint16 pwm);

#endif /* CODE_SERVO_H_ */
