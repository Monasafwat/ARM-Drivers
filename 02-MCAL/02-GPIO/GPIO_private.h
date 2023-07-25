 /*****************************************************************************/
/* Auther       : Mona Safwat                                                */ 
/* Date         : 14 June 2023                                               */
/* Version      : V01                                                        */
/*****************************************************************************/

#ifndef  GPIO_PRIVATE_H
#define  GPIO_PRIVATE_H

#define  GPIOA_BASE_ADDRESS       0x40020000
#define  GPIOB_BASE_ADDRESS       0x40020400
#define  GPIOC_BASE_ADDRESS       0x40020800

          /* Registers Addresses For PORTA     */ 
#define  GPIOA_MODER              *((u32*)(GPIOA_BASE_ADDRESS+0x00))
#define  GPIOA_OTYPER             *((u32*)(GPIOA_BASE_ADDRESS+0x04))
#define  GPIOA_OSPEEDER           *((u32*)(GPIOA_BASE_ADDRESS+0x08))
#define  GPIOA_PUPDR              *((u32*)(GPIOA_BASE_ADDRESS+0x0C))
#define  GPIOA_IDR                *((u32*)(GPIOA_BASE_ADDRESS+0x10))
#define  GPIOA_ODR                *((u32*)(GPIOA_BASE_ADDRESS+0x14))
#define  GPIOA_BSRR               *((u32*)(GPIOA_BASE_ADDRESS+0x18))
#define  GPIOA_LCKR               *((u32*)(GPIOA_BASE_ADDRESS+0x1C))
#define  GPIOA_AFRL               *((u32*)(GPIOA_BASE_ADDRESS+0x20))
#define  GPIOA_AFRH               *((u32*)(GPIOA_BASE_ADDRESS+0x24))

          /* Registers Addresses For PORTB    */
#define  GPIOB_MODER              *((u32*)(GPIOB_BASE_ADDRESS+0x00))
#define  GPIOB_OTYPER             *((u32*)(GPIOB_BASE_ADDRESS+0x04))
#define  GPIOB_OSPEEDER           *((u32*)(GPIOB_BASE_ADDRESS+0x08))
#define  GPIOB_PUPDR              *((u32*)(GPIOB_BASE_ADDRESS+0x0C))
#define  GPIOB_IDR                *((u32*)(GPIOB_BASE_ADDRESS+0x10))
#define  GPIOB_ODR                *((u32*)(GPIOB_BASE_ADDRESS+0x14))
#define  GPIOB_BSRR               *((u32*)(GPIOB_BASE_ADDRESS+0x18))
#define  GPIOB_LCKR               *((u32*)(GPIOB_BASE_ADDRESS+0x1C))
#define  GPIOB_AFRL               *((u32*)(GPIOB_BASE_ADDRESS+0x20))
#define  GPIOB_AFRH               *((u32*)(GPIOB_BASE_ADDRESS+0x24))

/*
             /* Registers Addresses For PORTC    */
#define  GPIOC_MODER              *((u32*)(GPIOC_BASE_ADDRESS+0x00))
#define  GPIOC_OTYPER             *((u32*)(GPIOC_BASE_ADDRESS+0x04))
#define  GPIOC_OSPEEDER           *((u32*)(GPIOC_BASE_ADDRESS+0x08))
#define  GPIOC_PUPDR              *((u32*)(GPIOC_BASE_ADDRESS+0x0C))
#define  GPIOC_IDR                *((u32*)(GPIOC_BASE_ADDRESS+0x10))
#define  GPIOC_ODR                *((u32*)(GPIOC_BASE_ADDRESS+0x14))
#define  GPIOC_BSRR               *((u32*)(GPIOC_BASE_ADDRESS+0x18))
#define  GPIOC_LCKR               *((u32*)(GPIOC_BASE_ADDRESS+0x1C))
#define  GPIOC_AFRL               *((u32*)(GPIOC_BASE_ADDRESS+0x20))
#define  GPIOC_AFRH               *((u32*)(GPIOC_BASE_ADDRESS+0x24))*/

#define  CSSON                    19

#define  LUCKED_PIN 16


#endif