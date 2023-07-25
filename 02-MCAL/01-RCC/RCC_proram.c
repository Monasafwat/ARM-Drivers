/*****************************************************************************/
/* Auther       : Mona Safwat                                                */ 
/* Date         : 11 June 2023                                               */
/* Version      : V01                                                        */
/*****************************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"

void MRCC_voidEnablePeripheralClock(u8 BusName , u8 Copy_u8PerNum )
{
	switch(BusName)
	{
		case AHB1 : SET_BIT(RCC_AHB1ENR,Copy_u8PerNum); break;
		case AHB2 : SET_BIT(RCC_AHB2ENR,Copy_u8PerNum); break;
		case APB1 : SET_BIT(RCC_APB1ENR,Copy_u8PerNum); break;
		case APB2 : SET_BIT(RCC_APB2ENR,Copy_u8PerNum); break;
		default   :                                     break;                       
	}
}
void MRCC_voidDisablePeripheralClock(u8 BusName , u8 Copy_u8PerNum )
{
	switch(BusName)
	{
		case AHB1 : CLR_BIT(RCC_AHB1ENR,Copy_u8PerNum); break;
		case AHB2 : CLR_BIT(RCC_AHB2ENR,Copy_u8PerNum); break;
		case APB1 : CLR_BIT(RCC_APB1ENR,Copy_u8PerNum); break;
		case APB2 : CLR_BIT(RCC_APB2ENR,Copy_u8PerNum); break;
		default   :                                     break;                       
	}
}
void MRCC_voidEnableSecuritySystem(void)
{
	SET_BIT(RCC_CR,CSSON);
}
void MRCC_voidDisableSecuritySystem(void)
{
		CLR_BIT(RCC_CR,CSSON);
}
void  MRCC_voidInitClock(void)
{
	#if       CLK_SRC == HSI
	/* enable HSI  */
	  SET_BIT(RCC_CR  ,0);
	/* clock select  HSI  */
	  CLR_BIT(RCC_CFGR,0);
      CLR_BIT(RCC_CFGR,1);
	#elif    CLK_SRC == HSE
	
	  #if    HSE_SRC == HSE_CRYSTAL
	  /* enable HSE  */
	    SET_BIT(RCC_CR  ,16);
		/* disable pypass */
        CLR_BIT(RCC_CR  ,18);
		/* clock select  HSE  */
		SET_BIT(RCC_CFGR,0);
		CLR_BIT(RCC_CFGR,1);
	  #elif  HSE_SRC == HSE_RC
	  /* enable HSE  */
	    SET_BIT(RCC_CR  ,16);
		/* enable pypass */
        SET_BIT(RCC_CR  ,18);
		/* clock select  HSE  */
		SET_BIT(RCC_CFGR,0);
		CLR_BIT(RCC_CFGR,1);
	  #endif
	#elif    CLK_SRC == PLL
	
	  #if    PLL_SRC == HSI_PLL
	  
	         SET_BIT(RCC_CR  ,0);
			 SET_BIT(RCC_CR  ,24);
			 CLR_BIT(RCC_PLLCFGR,22);
		     CLR_BIT(RCC_CFGR,0);
		     SET_BIT(RCC_CFGR,1);			 
	  #elif  PLL_SRC == HSE_PLL
	     	    SET_BIT(RCC_CR  ,16);
		  #if    HSE_SRC == HSE_CRYSTAL
		         CLR_BIT(RCC_CR  ,18);
		  #elif  HSE_SRC == HSE_RC
                 SET_BIT(RCC_CR  ,18);
		  #endif
		        SET_BIT(RCC_CR  ,24);
			    SET_BIT(RCC_PLLCFGR,22);
		        CLR_BIT(RCC_CFGR,0);
		        SET_BIT(RCC_CFGR,1);
	  #endif
	#endif
}

		