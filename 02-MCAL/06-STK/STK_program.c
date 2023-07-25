/*****************************************************************************/
/* Auther       : Mona Safwat                                                */ 
/* Date         : 9 July 2023                                                */
/* Version      : V01                                                        */
/*****************************************************************************/ 

#include "STD_TYPES"
#include "BIT_MATHS"

#include "STK_interface.h"
#include "STK_private.h"
#include "STK_config.h"

u8 single_flag = 0;
void STK_voidInit(void)
{
	STK_CTRL |=STK_CLOCK_SOURCE;
	CLR_BIT(STK_CTRL,0);
	CLR_BIT(STK_CTRL,1);

}
void STK_voidSetBusyWait(u32 Copy_u8Ticks)
{
	STK_LOAD = Copy_u8Ticks;
	SET_BIT(STK_CTRL,0);
	SET_BIT(STK_CTRL,1);
	while(GET_BIT(STK_CTRL,16));
}
void STK_voidSetIntervalSingle (u32 Copy_u8Ticks ,void(*Copy_ptr)(void))
{
	callback=Copy_ptr;
	STK_LOAD = Copy_u8Ticks;
	SET_BIT(STK_CTRL,0);
	SET_BIT(STK_CTRL,1);
	single_flag = 1;

	
}
void STK_voidSetIntervalPriodic(u32 Copy_u8Ticks ,void(*Copy_ptr)(void))
{
	single_flag = 0;
	callback=Copy_ptr;
	STK_LOAD = Copy_u8Ticks;
	SET_BIT(STK_CTRL,0);
	SET_BIT(STK_CTRL,1);
}
void STK_voidStopInterval(void)
{
	STK_LOAD=0;
}
u32 STK_u32GetElapseTime(void)
{
	u32 Local_u8Value=0;
	Local_u8Value=0x00FFFFFF-STK_VAL;
	return Local_u8Value;
}
u32 STK_u32GetRemainingTime(void)
{
	u32 Local_u8Value=0;
	Local_u8Value=STK_VAL;
	return Local_u8Value;
}


void SysTick_Handler
{
	if(single_flag)
	{
	 CLR_BIT(STK_CTRL,0);
	 CLR_BIT(STK_CTRL,1);	
	}
	GET_BIT(STK_CTRL,16);
	callback();
	
	
}