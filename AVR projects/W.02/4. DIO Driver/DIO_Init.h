/*
 * DIO_Init.h
 *
 *  Created on: 29 Oct 2023
 *      Author: USER
 */
#include "StdTypes.h"
#include "errorState.h"
#include "DIO_Priv.h"
#ifndef DIO_INIT_H_
#define DIO_INIT_H_

ES_T DIO_enuInit();
ES_T DIO_enuSetPortDir(u8 Copy_u8PortID, u8 Copy_u8Value);
ES_T DIO_enuSetPortVal(u8 Copy_u8PortID, u8 Copy_u8Value);
ES_T DIO_enuTogglePort(u8 Copy_u8PortID);
ES_T DIO_enuGetPortVal(u8 Copy_u8PortID, u8* Copy_pu8Value);

ES_T DIO_enuSetPinDir(u8 Copy_u8PortID, u8 Copy_u8PinID, u8 Copy_u8Value);
ES_T DIO_enuSetPinVal(u8 Copy_u8PortID, u8 Copy_u8PinID, u8 Copy_u8Value);
ES_T DIO_enuTogglePin(u8 Copy_u8PortID, u8 Copy_u8PinID);
ES_T DIO_enuGetPinVal(u8 Copy_u8PortID, u8 Copy_u8PinID, 8* Copy_pu8Value);

#endif /* DIO_INIT_H_ */
