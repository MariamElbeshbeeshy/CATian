/*
 * LedandSwitch.c
 *
 *  Created on: 10 Oct 2023
 *      Author: USER
 */

#include <util/delay.h>
typedef unsigned char u8;

#define DDRA *((u8*)0x3A)
#define PORTA *((u8*)0x3B)
#define PINA *((volatile u8*)0x39)

#define PORTB *((u8*)0x38)
#define DDRB *((u8*)0x37)
#define PINB *((volatile u8*)0x36)

#define CLR_BIT(reg,bit) reg&=~(1<<bit)
#define SET_BIT(reg,bit) reg|=(1<<bit)
#define GET_BIT(reg,bit) (reg>>bit)&1

int main()
{
	//LED 1,2 IS OUTPUT, LOW AT START
	DDRA=0X03;
	PORTA=0;

	//SW IS INPUT
	DDRB=0;
	//ACTIVATE PULL UP RES
	PORTB=0X07;

	while(1)
	{
		if(!GET_BIT(PINB,0))
		{
			SET_BIT(PORTA,0);
		}
		else if(!GET_BIT(PINB,1))
		{
			SET_BIT(PORTA,1);
		}
		else if(!GET_BIT(PINB,2))
		{
			SET_BIT(PORTA,0);
			SET_BIT(PORTA,1);
		}
		else
		{
			CLR_BIT(PORTA,0);
			CLR_BIT(PORTA,1);
		}
	}
	return 0;
}

