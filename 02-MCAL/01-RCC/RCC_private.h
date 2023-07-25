/*****************************************************************************/
/* Auther       : Mona Safwat                                                */ 
/* Date         : 11 June 2023                                               */
/* Version      : V01                                                        */
/*****************************************************************************/

#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H

/* Register Definitions   */
#define RCC_BASEADDRESS                   0x40023800

#define RCC_CR                   *((u32*)(RCC_BASEADDRESS)+0x00)
#define RCC_PLLCFGR              *((u32*)(RCC_BASEADDRESS)+0x04)
#define RCC_CFGR                 *((u32*)(RCC_BASEADDRESS)+0x08)
#define RCC_CIR                  *((u32*)(RCC_BASEADDRESS)+0x0C)
#define RCC_AHB1RSTR             *((u32*)(RCC_BASEADDRESS)+0x10)
#define RCC_AHB2RSTR             *((u32*)(RCC_BASEADDRESS)+0x14)
#define RCC_APB1RSTR             *((u32*)(RCC_BASEADDRESS)+0x20)
#define RCC_APB2RSTR             *((u32*)(RCC_BASEADDRESS)+0x24)
#define RCC_AHB1ENR              *((u32*)(RCC_BASEADDRESS)+0x30)
#define RCC_AHB2ENR              *((u32*)(RCC_BASEADDRESS)+0x34)
#define RCC_APB1ENR              *((u32*)(RCC_BASEADDRESS)+0x40)
#define RCC_APB2ENR              *((u32*)(RCC_BASEADDRESS)+0x44)
#define RCC_AHB1LPENR            *((u32*)(RCC_BASEADDRESS)+0x50)
#define RCC_AHB2LPENR            *((u32*)(RCC_BASEADDRESS)+0x54)
#define RCC_APB1LPENR            *((u32*)(RCC_BASEADDRESS)+0x60)
#define RCC_APB2LPENR            *((u32*)(RCC_BASEADDRESS)+0x64)
#define RCC_BDCR                 *((u32*)(RCC_BASEADDRESS)+0x70)
#define RCC_CSR                  *((u32*)(RCC_BASEADDRESS)+0x74)
#define RCC_SSCGR                *((u32*)(RCC_BASEADDRESS)+0x80)
#define RCC_PLLI2SCFGR           *((u32*)(RCC_BASEADDRESS)+0x84)
#define RCC_DCKCFGR              *((u32*)(RCC_BASEADDRESS)+0x8C)


/* Clock Types */
#define RCC_HSE_CRYSTAL   0
#define RCC_HSE_RC        1
#define	RCC_HSI           2
#define	RCC_PLL           3

/*PLL Options */
#define RCC_PLL_IN_HSI_DIV_2   0
#define RCC_PLL_IN_HSE_DIV_2   1
#define	RCC_PLL_IN_HSE         2 

#endif 