/*
 * main.c
 *
 *  Created on: 18 Jul 2022
 *      Author: Amr Ezzat
 */

#include "avr/delay.h"
#include "STD_TYPES.h"
#include "Bit_math.h"

#include "DIO_interface.h"
#include "Register.h"


int main()
{
	DIO_VoidSetPinDirection(DIO_u8_PORTA,DIO_u8_Pin0,DIO_u8_OUTPUT);
	DIO_VoidSetPinDirection(DIO_u8_PORTA,DIO_u8_Pin4,DIO_u8_OUTPUT);
	DIO_VoidSetPinDirection(DIO_u8_PORTA,DIO_u8_Pin7,DIO_u8_OUTPUT);


	while(1)
	{
		DIO_VoidSetPinValue(DIO_u8_PORTA,DIO_u8_Pin0,DIO_u8_HIGH);
		_delay_ms(200);
		DIO_VoidSetPinValue(DIO_u8_PORTA,DIO_u8_Pin0,DIO_u8_LOW);



		DIO_VoidSetPinValue(DIO_u8_PORTA,DIO_u8_Pin4,DIO_u8_HIGH);
		_delay_ms(200);
		DIO_VoidSetPinValue(DIO_u8_PORTA,DIO_u8_Pin4,DIO_u8_LOW);

		DIO_VoidSetPinValue(DIO_u8_PORTA,DIO_u8_Pin7,DIO_u8_HIGH);
		_delay_ms(200);
		DIO_VoidSetPinValue(DIO_u8_PORTA,DIO_u8_Pin7,DIO_u8_LOW);
	}



	return 0;
}















