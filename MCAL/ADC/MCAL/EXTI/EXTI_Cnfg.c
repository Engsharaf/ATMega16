/*
 * EXTI_Cnfg.c
 *
 *  Created on: Oct 8, 2021
 *      Author: Shaban
 */
#include "E:\NTI\AVR\ATmeg16_Drivers\LIB\STD_TYPES.h"
#include "E:\NTI\AVR\ATmeg16_Drivers\LIB\errorStates.h"

#include "EXTI_priv.h"
#include "EXTI_Cnfg.h"

EXTI_t EXTI_AstrCnfg[EXTI_NUM]=
{

		{ EXTI_ACTIVE   ,  EXTI_FALLING_EDGE   },//Int0.
		//{ EXTI_ACTIVE   ,  EXTI_FALLING_EDGE   },//Int1.
		//{ EXTI_ACTIVE   ,  EXTI_FALLING_EDGE   },//Int2.

};


