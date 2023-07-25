/*****************************************************************************/
/* Auther       : Mona Safwat                                                */ 
/* Date         : 6 Jul 2023                                                 */
/* Version      : V01                                                        */
/*****************************************************************************/ 

#include "STD_TYPES.h"
#include "BIT_MATHS.h"

#include "EXTI_interface.h"
#include "EXTI_config.h"
#include "EXTI_private.h"

void EXTI_voidInit(void)
{
	#if   EXTI_MODE  ==  RISING
    SET_BIT(EXTI->RTSR ,EXTI_LINE); 
	#elif EXTI_MODE  ==  FALLING
	SET_BIT(EXTI->FTSR ,EXTI_LINE); 
	#elif EXTI_MODE  ==  ON_CHANGE
	SET_BIT(EXTI->FTSR ,EXTI_LINE); 
    SET_BIT(EXTI->RTSR ,EXTI_LINE); 
    #else  #error   "Wrong Mode and Line Choice"
	#endif
	/* Disable interrupt  */
	CLR_BIT(EXTI->IMR ,copy_u8Line);
}
void EXTI_voidEnableEXTI(u8 copy_u8Line)
{
	    SET_BIT(EXTI->IMR ,copy_u8Line); 
}
void EXTI_voidDisableEXTI(u8 copy_u8Line)
{
	    CLR_BIT(EXTI->IMR ,copy_u8Line); 
}
void EXTI_voidSwTrigger(u8 copy_u8Line)
{
	    SET_BIT(EXTI->IMR ,copy_u8Line); 
	    SET_BIT(EXTI->IMR ,copy_u8Line); 
	    SET_BIT(EXTI->SWIER,copy_u8Line); 
}
void EXTI_voidSeTSignalLatch(u8 copy_u8Line,u8 copy_u8Mode)
{
	swich(copy_u8Mode)
	{
		case RISING    :     SET_BIT(EXTI->RTSR ,copy_u8Line); break;
		case FALLING   :     SET_BIT(EXTI->FTSR ,copy_u8Line); break;
		case ON_CHANGE : 	 SET_BIT(EXTI->FTSR ,copy_u8Line); 
                             SET_BIT(EXTI->RTSR ,copy_u8Line); break;
		default        :                                        break;
	}
    SET_BIT(EXTI->IMR ,copy_u8Line); 

}

void EXTI_voidSetCallBack(void (*ptr) (void))
{
	EXTI0_CallBack[0] = ptr;
}

void EXTI0_IRQHandler(void)
{
    EXTI0_CallBack[0] ();
	SET_BIT(EXTI->PR ,0);
}