/*****************************************************************************/
/* Title                 :   errorStates                                     */
/* Filename              :   errorStates.h                                   */
/* Author                :   Shaban Abdullah Awad                            */
/* Origin Date           :   Sep 7, 2021                                     */
/* Version               :   1.0.0                                           */
/* Compiler              :   mingw GCC                                       */
/* Notes                 :   None                                            */
/*                                                                           */
/*****************************************************************************/

/*****************************************************************************/
/****************************   FILE GUARDE  *********************************/
#ifndef ERRORSTATES_H_
#define ERRORSTATES_H_



/*****************************************************************************/
/* Description:    Define typer to all error types expected.                 */
/*****************************************************************************/
typedef enum
{
	ES_NOK             ,
	ES_OK              ,
	ES_NULL_POINTER    ,
	ES_OUT_OF_RANGE    ,

}ES_t;


#endif /* ERRORSTATES_H_ */

/******************************  END OF FILE  ********************************/
/*****************************************************************************/

