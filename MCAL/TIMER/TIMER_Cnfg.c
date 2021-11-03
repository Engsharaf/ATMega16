/*
 * TIMER_Cnfg.c
 *
 *  Created on: Oct 29, 2021
 *      Author: Shaban
 */
#include "E:\NTI\AVR\ATmeg16_Drivers\LIB\STD_TYPES.h"
#include "E:\NTI\AVR\ATmeg16_Drivers\LIB\errorStates.h"

#include "TIMER_Priv.h"
#include "TIMER_Cnfg.h"

TIMER_t TIMRE_AstrCnfg[TIMER_NUM]=
{
		{
				/* Timer0 configurations. */
				.TIMER_u8Mode         = OVF ,
				.TIMER_u8Prescaler    = PRES_1024 ,
				.TIMER_u8OCOState     = DISCONNECTED ,
				.TIMER_u16Freq_in_khz = (1000UL)

		}
		,
		{
				/* Timer1 configurations. */
			//	.TIMER_u8Mode         = 0 ,
			//	.TIMER_u8Prescaler    = 0 ,
			//	.TIMER_u8OCOState     = 0 ,
			//	.TIMER_u16Freq_in_khz = 0

		}
		,
		{
				/* Timer2 configurations. */
				//.TIMER_u8Mode         = 0 ,
				//.TIMER_u8Prescaler    = 0 ,
				//.TIMER_u8OCOState     = 0 ,
				//.TIMER_u16Freq_in_khz = 0

		},


};