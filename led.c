/*
 * led.c
 *
 * Created: 21.03.2017 13:12:26
 *  Author: kahalvor
 */

#include "led.h"


void led_init(){
	//setter led til 1
	DDRB |= (1<<PB0) | (1<<PB2) | (1<<PB4) | (1<<PB6);
	PORTB |= (1<<PB0) | (1<<PB2) | (1<<PB4) | (1<<PB6);
}

//sette led n= 0-3 , 1->av med lys 
void led_set(int n, int v) {	
	if(!v) {
		PORTB |= (1<<n);
	}
	else{
		PORTB &= ~(1<<n);
	}
}