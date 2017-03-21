/*
 * switch.h
 *
 * Created: 21.03.2017 13:14:39
 *  Author: kahalvor
 */ 


#ifndef SWITCH_H_
#define SWITCH_H_
#include <avr/io.h>

void switch_init(); 
int switch_read(int n); 

#endif /* SWITCH_H_ */