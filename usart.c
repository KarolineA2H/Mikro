/*
 * CFile1.c
 *
 * Created: 21.03.2017 15:08:20
 *  Author: kahalvor
 */ 
#include <inttypes.h>
#include "usart.h"
#include <avr/io.h> 
#define F_CPU 16000000

#define BAUD_PRESCALE (((F_CPU / (19200 * 16UL))) - 1)

void usart_init(){
	UBRR1 = 51;
	UCSR1B = (1<<RXEN1)|(1<<TXEN1);
	UCSR1C = (1<<USBS1)|(3<<UCSZ10);
}

void usart_putchar(char c) {
	while ( !( UCSR1A & (1<<UDRIE1)) );
	UDR1 = c;	
}
