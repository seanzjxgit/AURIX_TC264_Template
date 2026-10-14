/*
 * Led.c
 *
 *  Created on: 2026Äê10ÔÂ14ÈÕ
 *      Author: seanz
 */
#include "Led.h"

void Led_init(){
    gpio_init(P02_4,GPO,1,GPO_PUSH_PULL);
    gpio_init(P02_5,GPO,1,GPO_PUSH_PULL);
    gpio_init(P02_6,GPO,1,GPO_PUSH_PULL);
    gpio_init(P02_7,GPO,1,GPO_PUSH_PULL);
}

void Led_on(){
    gpio_set_level(P02_4,1);
    gpio_set_level(P02_5,1);
    gpio_set_level(P02_6,1);
    gpio_set_level(P02_7,1);
}
