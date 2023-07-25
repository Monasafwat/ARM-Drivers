/*****************************************************************************/
/* Auther       : Mona Safwat                                                */ 
/* Date         : 9 July 2023                                                */
/* Version      : V01                                                        */
/*****************************************************************************/ 

#ifndef STK_PRIVATE_H
#define STK_PRIVATE_H

void (*callback)(void)=NULL;

#define      AHB                    4
#define      AHB/8                  0 

#define  STK_BASE_ADDRESS        0xE000E010

#define  STK_CTRL            *((volatile u32*)(STK_BASE_ADDRESS + 0x00))
#define  STK_LOAD            *((volatile u32*)(STK_BASE_ADDRESS + 0x04))
#define  STK_VAL             *((volatile u32*)(STK_BASE_ADDRESS + 0x08))
#define  STK_CALIB           *((volatile u32*)(STK_BASE_ADDRESS + 0x0C))


#endif



