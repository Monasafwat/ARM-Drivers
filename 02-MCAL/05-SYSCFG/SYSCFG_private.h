/*****************************************************************************/
/* Auther       : Mona Safwat                                                */ 
/* Date         : 6 Jul 2023                                                 */
/* Version      : V01                                                        */
/*****************************************************************************/ 

#ifndef SYSCFG_PRIVATE_H
#define SYSCFG_PRIVATE_H

typedef struct{
u32 MEMRMP;
u32 PMC;
u32 EXTICR[4];
u32 CMPCR;
}SYSCFG_t;

#define   SYSCFG     ((SYSCFG_t*)0x40013800)

#endif