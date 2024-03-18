/*
 * EXTI_INT_types.h
 *
 *  Created on: Feb 24, 2023
 *      Author: ahmed57
 */




#ifndef EXTI_INT_TYPES_H_
#define EXTI_INT_TYPES_H_


/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

typedef enum{
	EXTI_Disable =0,
	EXTI_Enable
}EXTI_Enable_Disable_t;

typedef enum{
	EXTI_Sense_Low_Level 	  = 0b00,
	EXTI_Sense_Logical_Change = 0b01,
	EXTI_Sense_Falling_Edge   = 0b10,
	EXTI_Sense_Rising_Edge    = 0b11

}EXTI_SenseType_t;

typedef enum{
	EXTI_INT0 =0,
	EXTI_INT1,
	EXTI_INT2
}EXTI_ID;


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  END OF FILE:
 *********************************************************************************************************************/
#endif /* EXTI_INT_EXTI_INT_TYPES_H_ */