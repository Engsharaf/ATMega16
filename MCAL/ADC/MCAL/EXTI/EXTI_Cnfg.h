/*
 * EXTI_Cnfg.h
 *
 *  Created on: Oct 8, 2021
 *      Author: Shaban
 */

#ifndef EXTI_CNFG_H_
#define EXTI_CNFG_H_

typedef struct
{
	u8 EXTI_u8State        ;
	u8 EXTI_u8SenceLevel   ;

}EXTI_t;




extern EXTI_t EXTI_AstrCnfg[];


#endif /* EXTI_CNFG_H_ */
