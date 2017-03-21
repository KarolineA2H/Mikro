/*
 * led.h
 *
 * Created: 21.03.2017 13:14:57
 *  Author: kahalvor
 */ 


#ifndef LED_H_
#define LED_H_

#include <avr/io.h>

void led_set(int n, int v); 
void led_init(); 



#endif /* LED_H_ */