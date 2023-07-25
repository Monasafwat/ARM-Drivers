/*****************************************************************************/
/* Auther       : Mona Safwat                                                */ 
/* Date         : 6 Jul 2023                                                 */
/* Version      : V01                                                        */
/*****************************************************************************/ 

#ifndef EXTI_INTERFACE_H
#define EXTI_INTERFACE_H

/*line and mode */
void EXTI_voidInit(void);
void EXTI_voidEnableEXTI(u8 copy_u8Line);
void EXTI_voidDisableEXTI(u8 copy_u8Line);
void EXTI_voidSwTrigger(u8 copy_u8Line);
void EXTI_voidSeTSignalLatch(u8 copy_u8Line,u8 copy_u8Mode);
void EXTI_voidSetCallBack(void (*ptr) (void));

#endif