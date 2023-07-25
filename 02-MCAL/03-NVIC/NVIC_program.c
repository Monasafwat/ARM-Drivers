/*****************************************************************************/
/* Auther       : Mona Safwat                                                */ 
/* Date         : 20 June 2023                                               */
/* Version      : V01                                                        */
/*****************************************************************************/ 
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "NVIC_interface.h"
#include "NVIC_private.h"
#include "NVIC_config.h"

void NVIC_voidInit(void)
{
        SCB_AIRCR = NUM_OF_GROUPs_AND_SUBS;
}
void MNVIC_voidEnableInterrupt  (u8 Copr_u8IntNumber )
{
	if ( Copr_u8IntNumber<=31)
	{
		NVIC_ISER0= (1 << Copr_u8IntNumber);
	}
	else if (Copr_u8IntNumber<=59)
	{
		Copr_u8IntNumber-=32;
		NVIC_ISER1 = (1 << Copr_u8IntNumber);
	}
	else 
	{
		  /* Return Error */
	}
}


void MNVIC_voidDisableInterrupt  (u8 Copr_u8IntNumber )
{
	if ( Copr_u8IntNumber<=31)
	{
		NVIC_ICER0= (1 << Copr_u8IntNumber);
	}
	else if (Copr_u8IntNumber<=59)
	{
		Copr_u8IntNumber-=32;
		NVIC_ICER1 = (1 << Copr_u8IntNumber);
	}
	else 
	{
		  /* Return Error */
	}
}

void MNVIC_voidSetPendingFlag  (u8 Copr_u8IntNumber )
{
	if ( Copr_u8IntNumber<=31)
	{
		NVIC_ISPR0= (1 << Copr_u8IntNumber);
	}
	else if (Copr_u8IntNumber<=59)
	{
		Copr_u8IntNumber-=32;
		NVIC_ISPR1 = (1 << Copr_u8IntNumber);
	}
	else 
	{
		  /* Return Error */
	}
}

void MNVIC_voidClearPendingFlag  (u8 Copr_u8IntNumber )
{
	if ( Copr_u8IntNumber<=31)
	{
		NVIC_ICPR0= (1 << Copr_u8IntNumber);
	}
	else if (Copr_u8IntNumber<=59)
	{
		Copr_u8IntNumber-=32;
		NVIC_ICPR1 = (1 << Copr_u8IntNumber);
	}
	else 
	{
		  /* Return Error */
	}
}


u8 MNVIC_u8GetActiveFlag  (u8 Copr_u8IntNumber )
{
	u8 Local_u8Result;
	if ( Copr_u8IntNumber<=31)
	{
		Local_u8Result=GET_BIT(NVIC_IABR0,Copr_u8IntNumber);
	}
	else if (Copr_u8IntNumber<=59)
	{
		Copr_u8IntNumber-=32;
		Local_u8Result=GET_BIT(NVIC_IABR1,Copr_u8IntNumber);
	}
	else 
	{
		  /* Return Error */
	}
	return Local_u8Result;
}

void MNVIC_voidSetPriority  (u8 copr_s8IntID , u8 copy_u8GroupPriority , u8 copy_u8SubPriority )//,u32 copy_u32GROUP )
{
    u8 Loc_u8Priority = 0;	  
	  /* 0x05FA0400   Group & 1 sub priority */
	u8 Local_u8Priority = copy_u8SubPriority|copy_u8GroupPriority<<(NUM_OF_GROUPs_AND_SUBS - 0x05FA0300)/0x100;
    /* core peripheral          */
	 
	/* external peripheral     */
	if(copr_s8IntID >= 0)
	{
		IPR[copr_s8IntID] = Local_u8Priority << 4 ;
    }
   // SCB_AIRCR = copy_u32GROUP ;	
}

