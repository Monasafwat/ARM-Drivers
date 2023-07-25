/*****************************************************************************/
/* Auther       : Mona Safwat                                                */ 
/* Date         : 9 July 2023                                                */
/* Version      : V01                                                        */
/*****************************************************************************/ 

#ifndef STK_INTERFACE_H
#define STK_INTERFACE_H



void STK_voidInit(void);
void STK_voidSetBusyWait(u32 Copy_u8Ticks);
void STK_voidSetIntervalSingle (u32 Copy_u8Ticks ,void(*Copy_ptr)(void));
void STK_voidSetIntervalPriodic(u32 Copy_u8Ticks ,void(*Copy_ptr)(void));
void STK_voidStopInterval(void);
void STK_u32GetElapseTime(void);
void STK_u32GetRemainingTime(void);





#endif