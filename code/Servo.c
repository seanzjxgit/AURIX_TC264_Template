/*
 * Servo.c
 *
 *  Created on: 2026Äê10ÔÂ14ÈÕ
 *      Author: seanz
 */

#include "Servo.h"

uint16 pwm = SERVO_PWMMID;

void Servo_Init(void){
    pwm_init(ATOM0_CH1_P33_9, 50, SERVO_PWMMID);
}

void Servo_Ctrl(uint16 pwm){
    pwm_set_duty(ATOM0_CH1_P33_9,pwm);
}

