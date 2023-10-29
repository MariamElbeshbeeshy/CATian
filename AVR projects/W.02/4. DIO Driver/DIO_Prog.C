/*
 * DIO_Prog.C
 *
 *  Created on: 29 Oct 2023
 *      Author: USER
 */
#include "errorState.h"
#include "StdTypes.h"
#include "DIO_Priv.h"
#include "DIO_Config.h"

ES_T DIO_enuInit()
{
	ES_T local_enuErrorState = ES_NOK;
	DDRA=CONC(PA_PIN7_DIR, PA_PIN6_DIR, PA_PIN5_DIR, PA_PIN4_DIR, PA_PIN3_DIR, PA_PIN2_DIR, PA_PIN1_DIR, PA_PIN0_DIR);
	DDRB=CONC(PB_PIN7_DIR, PB_PIN6_DIR, PB_PIN5_DIR, PB_PIN4_DIR, PB_PIN3_DIR, PB_PIN2_DIR, PB_PIN1_DIR, PB_PIN0_DIR);
	DDRC=CONC(PC_PIN7_DIR, PC_PIN6_DIR, PC_PIN5_DIR, PC_PIN4_DIR, PC_PIN3_DIR, PC_PIN2_DIR, PC_PIN1_DIR, PC_PIN0_DIR);
	DDRD=CONC(PD_PIN7_DIR, PD_PIN6_DIR, PD_PIN5_DIR, PD_PIN4_DIR, PD_PIN3_DIR, PD_PIN2_DIR, PD_PIN1_DIR, PD_PIN0_DIR);

	PORTA=CONC(PA_PIN7_VAL,
			   PA_PIN6_VAL,
			   PA_PIN5_VAL,
			   PA_PIN4_VAL,
			   PA_PIN3_VAL,
			   PA_PIN2_VAL,
			   PA_PIN1_VAL,
			   PA_PIN0_VAL);
	PORTB=CONC(PB_PIN7_VAL,
			   PB_PIN6_VAL,
			   PB_PIN5_VAL,
			   PB_PIN4_VAL,
			   PB_PIN3_VAL,
			   PB_PIN2_VAL,
			   PB_PIN1_VAL,
			   PB_PIN0_VAL);
	PORTD=CONC(PC_PIN7_VAL,
			   PC_PIN6_VAL,
			   PC_PIN5_VAL,
			   PC_PIN4_VAL,
			   PC_PIN3_VAL,
			   PC_PIN2_VAL,
			   PC_PIN1_VAL,
			   PC_PIN0_VAL);
	PORTD=CONC(PD_PIN7_VAL,
			   PD_PIN6_VAL,
			   PD_PIN5_VAL,
			   PD_PIN4_VAL,
			   PD_PIN3_VAL,
			   PD_PIN2_VAL,
			   PD_PIN1_VAL,
			   PD_PIN0_VAL);
	ES_T= ES_OK;
}


ES_T DIO_enuSetPortDir(u8 Copy_u8PortID, u8 Copy_u8Value);
{
	ES_T local_enuErrorState = ES_NOK;
	if(Copy_u8PortID<= DIO_PORTD)
	{
		switch(Copy_u8PortID)
		{
		case DIO_PORTA:
			DDRA= Copy_u8Value;
			break;
		case DIO_PORTB:
			DDRB= Copy_u8Value;
			break;
		case DIO_PORTC:
			DDRC= Copy_u8Value;
			break;
		case DIO_PORTD:
			DDRD= Copy_u8Value;
			break;
		}
		local_enuErrorState = ES_OK;
	}
	else
		local_enuErrorState = ES_OUT_OF_RANGE;
	return local_enuErrorState;
}


ES_T DIO_enuSetPortVal(u8 Copy_u8PortID, u8 Copy_u8Value);
{
	ES_T local_enuErrorState = ES_NOK;
	if(Copy_u8PortID<= DIO_PORTD)
		{
			switch(Copy_u8PortID)
			{
			case DIO_PORTA:
				PORTA= Copy_u8Value;
				break;
			case DIO_PORTB:
				PORTB= Copy_u8Value;
				break;
			case DIO_PORTC:
				PORTC= Copy_u8Value;
				break;
			case DIO_PORTD:
				PORTD= Copy_u8Value;
				break;
			}
			local_enuErrorState = ES_OK;
		}
		else
			local_enuErrorState = ES_OUT_OF_RANGE;
	return local_enuErrorState;
}


ES_T DIO_enuTogglePort(u8 Copy_u8PortID)
{
	ES_T local_enuErrorState = ES_NOK;
	if(Copy_u8PortID<= DIO_PORTD)
	{
		switch(Copy_u8PortID)
		{
		case DIO_PORTA:
			PORTA= ~PORTA;
			break;
		case DIO_PORTB:
			PORTB= ~PORTB;
			break;
		case DIO_PORTC:
			PORTC= ~PORTC;
			break;
		case DIO_PORTD:
			PORTD= ~PORTD;
			break;
		}
		local_enuErrorState = ES_OK;
	}
	else
		local_enuErrorState = ES_OUT_OF_RANGE;
	return local_enuErrorState;
}


ES_T DIO_enuGetPortVal(u8 Copy_u8PortID, u8* Copy_pu8Value)
{
	ES_T local_enuErrorState = ES_NOK;
	if(Copy_pu8Value != NULL)
	{
		if(Copy_u8PortID<= DIO_PORTD)
		{
				switch(Copy_u8PortID)
				{
				case DIO_PORTA:
					*Copy_pu8Value= PINA;
					break;
				case DIO_PORTB:
					*Copy_pu8Value= PINB;
					break;
				case DIO_PORTC:
					*Copy_pu8Value= PINC;
					break;
				case DIO_PORTD:
					*Copy_pu8Value= PIND;
					break;
				}
				local_enuErrorState = ES_OK;
			}
			else
				local_enuErrorState = ES_OUT_OF_RANGE;
		}
		else
			local_enuErrorState = ES_NULL_POINTER;

	return local_enuErrorState;
}


ES_T DIO_enuSetPinDir(u8 Copy_u8PortID, u8 Copy_u8PinID, u8 Copy_u8Value)
{
	ES_T local_enuErrorState = ES_NOK;
	if(Copy_u8PortID<= DIO_PORTD && Copy_u8PinID<=DIO_PIN7 && Copy_u8Value<=OUTPUT)
	{
		switch(Copy_u8PortID)
		{
		case DIO_PORTA:
			DDRA&= ~(1<<Copy_u8PinID)
			DDRA|= (Copy_u8Value<<Copy_u8PinID)
			break;
		case DIO_PORTB:
			DDRB&= ~(1<<Copy_u8PinID)
			DDRB|= (Copy_u8Value<<Copy_u8PinID)
			break;
		case DIO_PORTC:
			DDRC&= ~(1<<Copy_u8PinID)
			DDRC|= (Copy_u8Value<<Copy_u8PinID)
			break;
		case DIO_PORTD:
			DDRD&= ~(1<<Copy_u8PinID)
			DDRD|= (Copy_u8Value<<Copy_u8PinID)
			break;
		}
		local_enuErrorState = ES_OK;
	}
	else
		local_enuErrorState = ES_OUT_OF_RANGE;

	return local_enuErrorState;
}


ES_T DIO_enuSetPinVal(u8 Copy_u8PortID, u8 Copy_u8PinID, u8 Copy_u8Value);
{
	ES_T local_enuErrorState = ES_NOK;
	if(Copy_u8PortID<= DIO_PORTD && Copy_u8PinID<=DIO_PIN7 && Copy_u8Value<=OUTPUT)
		{
			switch(Copy_u8PortID)
			{
			case DIO_PORTA:
				PORTA&= ~(1<<Copy_u8PinID)
				PORTA|= (Copy_u8Value<<Copy_u8PinID)
				break;
			case DIO_PORTB:
				PORTB&= ~(1<<Copy_u8PinID)
				PORTB|= (Copy_u8Value<<Copy_u8PinID)
				break;
			case DIO_PORTC:
				PORTC&= ~(1<<Copy_u8PinID)
				PORTC|= (Copy_u8Value<<Copy_u8PinID)
				break;
			case DIO_PORTD:
				PORTD&= ~(1<<Copy_u8PinID)
				PORTD|= (Copy_u8Value<<Copy_u8PinID)
				break;
			}
			local_enuErrorState = ES_OK;
		}
		else
			local_enuErrorState = ES_OUT_OF_RANGE;
	return local_enuErrorState;
}


ES_T DIO_enuTogglePin(u8 Copy_u8PortID, u8 Copy_u8PinID)
{
	ES_T local_enuErrorState = ES_NOK;
	if(Copy_u8PortID<= DIO_PORTD && Copy_u8PinID<=DIO_PIN7 && Copy_u8Value<=OUTPUT)
	{
		switch(Copy_u8PortID)
		{
		case DIO_PORTA:
			PORTA^= (1<<Copy_u8PinID)
			break;
		case DIO_PORTB:
			PORTB^= (1<<Copy_u8PinID)
			break;
		case DIO_PORTC:
			PORTC^= (1<<Copy_u8PinID)
			break;
		case DIO_PORTD:
			PORTD^= (1<<Copy_u8PinID)
			break;
		}
		local_enuErrorState = ES_OK;
	}
	else
		local_enuErrorState = ES_OUT_OF_RANGE;
	return local_enuErrorState;
}


ES_T DIO_enuGetPinVal(u8 Copy_u8PortID, u8 Copy_u8PinID, u8* Copy_pu8Value);
{
	ES_T local_enuErrorState = ES_NOK;
	if(Copy_pu8Value != NULL)
	{
		if(Copy_u8PortID<= DIO_PORTD && Copy_u8PinID<=DIO_PIN7 && Copy_u8Value<=OUTPUT)
		{
				switch(Copy_u8PortID)
				{
				case DIO_PORTA:
					*Copy_pu8Value= (PINA>>Copy_u8PinID)&1;
					break;
				case DIO_PORTB:
					*Copy_pu8Value= (PINB>>Copy_u8PinID)&1;
					break;
				case DIO_PORTC:
					*Copy_pu8Value= (PINC>>Copy_u8PinID)&1;
					break;
				case DIO_PORTD:
					*Copy_pu8Value= (PIND>>Copy_u8PinID)&1;
					break;
				}
				local_enuErrorState = ES_OK;
			}
			else
				local_enuErrorState = ES_OUT_OF_RANGE;
		}
		else
			local_enuErrorState = ES_NULL_POINTER;
	return local_enuErrorState;
}
