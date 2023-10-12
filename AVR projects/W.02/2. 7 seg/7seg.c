/*
 * 7seg.c
 *
 *  Created on: 10 Oct 2023
 *      Author: USER
 */
#include <util/delay.h>

typedef unsigned char u8;

#define GET_BIT(reg,bit) (reg &(1<<bit))
#define SET_BIT(reg,bit) (reg |= (1<<bit))
#define CLR_BIT(reg,bit) (reg &= ~(1<<bit))

#define DDRA *((u8*)0x3A)
#define PORTA *((u8*)0x3B)
#define PINA *((volatile u8*)0x39)

#define PORTB *((u8*)0x38)
#define DDRB *((u8*)0x37)
#define PINB *((volatile u8*)0x36)

#define PORTC *((u8*)0x35)
#define DDRC *((u8*)0x33)
#define PINC *((volatile u8*)0x36)

u8 seven_seg_cc [] = {0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};

int main(void)
{
	DDRC=0xff;
	PORTC=0;
	DDRA=0;
	PORTA=0XFF;
	u8 i=0;
	PORTC = seven_seg_cc[i];

    while(1)
    {
		if (GET_BIT(PINA,0)==0 && i<9)
		{
			_delay_ms(200);
			i++;
			PORTC = seven_seg_cc[i];
		}

		if (GET_BIT(PINA,1)==0 && i>0)
		{
			_delay_ms(200);
			i--;
			PORTC = seven_seg_cc [i];
		}

        _delay_ms(200);
    }
}

