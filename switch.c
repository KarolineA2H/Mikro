/*
 * switch.c
 *
 * Created: 21.03.2017 13:12:04
 *  Author: kahalvor
 */ 
// skal inneholde void switch_int() og int switch_read(int n)

#include "switch.h"

void switch_init(){
	//setter til 0
	DDRB &= ~(1<< PB1) | ~(1<< PB3) | ~(1<< PB5) | ~(1<< PB7) ; 
}

int switch_read(int n) {
	//skal returnere 1 hvis knappen er trykket
	//ellers skal den returnere 0 
	
	switch (n){
		case 0:
			return !(PINB & (1<<(PB1)));
			break;
		case 1:
			return !(PINB & (1<<(PB3)));
			break;
		case 2:
			return !(PINB & (1<<(PB5)));
			break;
		case 3:
			return !(PINB & (1<<(PB7)));
			break;	
		default:
			return 0;
			break;	
	}
}