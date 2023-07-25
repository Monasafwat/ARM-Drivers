/*****************************************************************************/
/* Auther       : Mona Safwat                                                */ 
/* Date         : 20 June 2023                                               */
/* Version      : V01                                                        */
/*****************************************************************************/ 

#ifndef NVIC_PRIVATE_H
#define NVIC_PRIVATE_H
 
#define NVIC_BASE_ADDRESS        0xE000E100
#define SCB_BASE_ADDRESS         0xE000ED00
 
#define NVIC_ISER0       *((u32*)NVIC_BASE_ADDRESS + 0x100)    /* Enable External interrupts from 0  to 31 */
#define NVIC_ISER1       *((u32*)NVIC_BASE_ADDRESS + 0x104)    /* Enable External interrupts from 32 to 63 */

#define NVIC_ICER0       *((u32*)NVIC_BASE_ADDRESS + 0x180)   
#define NVIC_ICER1       *((u32*)NVIC_BASE_ADDRESS + 0x184)

#define NVIC_ISPR0       *((u32*)NVIC_BASE_ADDRESS + 0x200)   
#define NVIC_ISPR1       *((u32*)NVIC_BASE_ADDRESS + 0x204)

#define NVIC_ICPR0       *((u32*)NVIC_BASE_ADDRESS + 0x280)   
#define NVIC_ICPR1       *((u32*)NVIC_BASE_ADDRESS + 0x284)

#define NVIC_IABR0       *((u32*)NVIC_BASE_ADDRESS + 0x300)   
#define NVIC_IABR1       *((u32*)NVIC_BASE_ADDRESS + 0x304)
  
#define NVIC_IPR          ((volatile u8 *)NVIC_BASE_ADDRESS + ox400)



#define SCB_AIRCR        *((volatile u32 *)SCB_BASE_ADDRESS + 0x0C)


#define GROUP_16_SUB_NONE   0x05FA0300       //  4 bits for group (IPR) => group
#define GROUP_8_SUB_2       0x05FA0400       //  3 bits for group and 1 bit for sub
#define GROUP_4_SUB_4       0x05FA0500       //  2 bits for group and 2 bits for sub
#define GROUP_2_SUB_8       0x05FA0600       //  1 bits for group and 3 bits for sub
#define GROUP_0_SUB_16      0x05FA0700       //  0 bits for group and 4 bits for sub

#endif