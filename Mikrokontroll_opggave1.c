/*
 * Mikrokontroll_opggave1.c
 *
 * Created: 21.03.2017 12:43:14
 *  Author: kahalvor
 */ 


#include <avr/io.h>
#include "switch.h"
#include "led.h"
#include "usart.h"

int main(void)
{
	usart_init();
	led_init();
	switch_init();
	
	while (1){
		usart_putchar('a');
		usart_putchar('\r');
		usart_putchar('\n');
		
		/*
		for (int i = 0; i <4; i ++){
			if (switch_read(i)){
				led_set(i,0);
			}
			else{
				led_set(i,1);
			}
		}
		*/
	}
	return 0; 
}