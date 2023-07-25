/*****************************************************************************/
/* Auther       : Mona Safwat                                                */ 
/* Date         : 6 Jul 2023                                                 */
/* Version      : V01                                                        */
/*****************************************************************************/ 


#ifndef EXTI_PRIVATE_H
#define EXTI_PRIVATE_H



typedef struct {
u32 IMR;
u32 EMR;
u32 RTSR;
u32 FTSR;
u32 SWIER;
u32 PR;
	
}EXTI_t;

static void (* EXTI0_CallBack[16]) (void)=NULL;


#define  LINE_0            0  
#define  LINE_1            1
#define  LINE_2            2
#define  LINE_3            3
#define  LINE_4            4
#define  LINE_5            5
#define  LINE_6            6
#define  LINE_7            7
#define  LINE_8            8
#define  LINE_9            9
#define  LINE_10           10      
#define  LINE_11           11
#define  LINE_12           12
#define  LINE_13           13
#define  LINE_14           14
#define  LINE_15           15

#define  RISING            0
#define  FALLING           1
#define  ON_CHANGE         2

#define  EXTI  ((volatile EXTI_t *)0x40013C00)
#endif