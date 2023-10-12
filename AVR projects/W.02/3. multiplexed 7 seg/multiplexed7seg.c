/*
 * multiplexed7seg.c
 *
 *  Created on: 11 Oct 2023
 *      Author: USER
 */
#include "stdTypes.h"
#include <util/delay.h>

#define GET_BIT(reg,bit) ((reg>>bit)&1)
#define SET_BIT(reg,bit) (reg |= (1<<bit))
#define CLR_BIT(reg,bit) (reg &= ~(1<<bit))

#define DDRA *((u8*)0x3A)
#define PORTA *((u8*)0x3B)
#define PINA *((volatile u8*)0x39)

#define PORTB *((u8*)0x38)
#define DDRB *((u8*)0x37)
#define PINB *((volatile u8*)0x36)

#define PORTC *((u8*)0x35)
#define DDRC *((u8*)0x34)
#define PINC *((volatile u8*)0x33)

u8 seven_seg_cc [] = {0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
int main()
{
	// COMMON ANODE
	DDRA=0xff;
	PORTA=0XFF;
	// COMMON ANODE
	DDRB=0xff;
	PORTB=0XFF;
	// PORT C IS INPUT, ACTIVATE PULL UP RES
	DDRC=0x00;
	PORTC=0XFF;
	// INTIALIZE 7SEG WITH 50
	u8 counter=50, deci, one;
	PORTA=~seven_seg_cc[counter/10];
	PORTB=~seven_seg_cc[counter%10];
	while(1)
	{
		if(!GET_BIT(PINC,0))
		{
			counter++;
			_delay_ms(300);
			//while(!GET_BIT(PINC,0));
		}
		else if(!GET_BIT(PINC,1))
		{
			counter--;
			_delay_ms(300);
			//while(!GET_BIT(PINC,1));
		}
		if(counter>99)
			counter=0;
		deci=counter/10;
		one=counter%10;
		PORTA=~seven_seg_cc[deci];
		PORTB=~seven_seg_cc[one];
	}

	return 0;
}

