#include <util/delay.h>
typedef unsigned char u8;

#define DDRA *((u8*)0x3A)
#define PORTA *((u8*)0x3B)
#define PINA *((volatile u8*)0x39)

#define CLR_BIT(reg,bit) reg&=~(1<<bit)
#define SET_BIT(reg,bit) reg|=(1<<bit)
#define GET_BIT(reg,bit) (reg>>bit)&1

int main()
{
	// PIN 0 IN PORTA IS OUTPUT
	DDRA=1;
	PORTA=0;
	while(1)
	{
		SET_BIT(PORTA,0);
		_delay_ms(500);
		CLR_BIT(PORTA,0);
		_delay_ms(500);
	}
}
