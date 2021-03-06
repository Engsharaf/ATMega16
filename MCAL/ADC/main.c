/*
 * main.c
 *
 *  Created on: Oct 13, 2021
 *      Author: Shaban
 */
/****************************************************************************/
/******************************  INCLUDES  **********************************/
#include "E:\NTI\AVR\ATmeg16_Drivers\LIB\STD_TYPES.h"
#include "E:\NTI\AVR\ATmeg16_Drivers\LIB\errorStates.h"

#include "E:\NTI\AVR\ATmeg16_Drivers\MCAL\interrupt.h"
#include "E:\NTI\AVR\ATmeg16_Drivers\MCAL\DIO\DIO_interface.h"

#include "ADC_Cnfg.h"
#include "ADC_interface.h"

#include <util\delay.h>
int main(void)
{
	u8 ADC_Read = 0 ;

	DIO_enuSetPortDirection( DIO_PORTD , DIO_OUTPUT_PORT );
	DIO_enuSetPortValue(DIO_PORTD , 0xFF);

	DIO_enuSetPinDirection(DIO_PORTA ,DIO_PIN0, DIO_INPTU_PIN );

	ADC_enuInit();
	ADC_enuSelectChannel( ADC_CHANNEL_0);
	ADC_enuEnable();


	while(1)
	{
		ADC_enuStartConversion();
		ADC_enuPollingSys();

		_delay_us(10);
		ADC_enuReadHighValue(&ADC_Read);

		//ADC_enuRead(&ADC_Read );
		DIO_enuSetPortValue(DIO_PORTD ,ADC_Read );



	}




}












