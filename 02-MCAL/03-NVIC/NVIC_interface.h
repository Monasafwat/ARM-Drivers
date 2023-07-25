/*****************************************************************************/
/* Auther       : Mona Safwat                                                */ 
/* Date         : 20 June 2023                                               */
/* Version      : V01                                                        */
/*****************************************************************************/ 

#ifndef NVIC_INTERFACE_H
#define NVIC_INTERFACE_H

void NVIC_voidInit(void);
void MNVIC_voidEnableInterrupt  (u8 Copr_u8IntNumber );
void MNVIC_voidDisableInterrupt (u8 Copr_u8IntNumber );
void MNVIC_voidSetPendingFlag   (u8 Copr_u8IntNumber );
void MNVIC_voidClearPendingFlag (u8 Copr_u8IntNumber );
u8   MNVIC_u8GetActiveFlag      (u8 Copr_u8IntNumber );
void MNVIC_voidSetPriority      (u8 copr_s8IntID , u8 copy_u8GroupPriority , u8 copy_u8SubPriority ,u32 copy_u32GROUP );


#define   NVIC_ WWDG               0
#define   NVIC_EXTI16_PVD          1
#define   NVIC_EXTI21_TAMP_STAMP   2
#define   NVIC_EXTI22_RTC_WKUP     3
#define   NVIC_FLASH               4
#define   NVIC_RCC                 5
#define   NVIC_EXTI0               6
#define   NVIC_EXTI1               7
#define   NVIC_EXTI2               8
#define   NVIC_EXTI3               9
#define   NVIC_EXTI4               10
#define   NVIC_DMA1_STREAM0        11
#define   NVIC_DMA1_STREAM1        12
#define   NVIC_DMA1_STREAM2        13
#define   NVIC_DMA1_STREAM3        14
#define   NVIC_DMA1_STREAM4        15
#define   NVIC_DMA1_STREAM5        16
#define   NVIC_DMA1_STREAM6        17
#define   NVIC_ADC                 18
#define   NVIC_EXTI9_5             23
#define   NVIC_TIM1_BRK_TIM9       24
#define   NVIC_TIM1_UP_TIM10       25
#define   NVIC_TIM1_TRG_COM_TIM11  26
#define   NVIC_TIM1_CC             27
#define   NVIC_TIM2                28
#define   NVIC_TIM3                29
#define   NVIC_TIM4                30
#define   NVIC_I2C1_EV             31
#define   NVIC_I2C1_ER             32
#define   NVIC_I2C2_EV             33
#define   NVIC_I2C2_ER             34

#endif