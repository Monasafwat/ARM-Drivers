/*****************************************************************************/
/* Auther       : Mona Safwat                                                */ 
/* Date         : 15 June 2023                                               */
/* Version      : V01                                                        */
/*****************************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GPIO_interface.h"
#include "GPIO_private.h"
/* input ,output ,alternate function or analog */
void MGPIO_voidSetPinMode(u8 Copy_u8PortName ,u8 Copy_u8PinNum ,u8 Copy_u8Mode  )
{
	switch(Copy_u8PortName)
	{
		case PORTA : GPIOA_MODER | = Copy_u8Mode<<(2U*Copy_u8PinNum));  break;
		case PORTB : GPIOB_MODER | = Copy_u8Mode<<(2U*Copy_u8PinNum));  break;
		default    :                                                    break;
	}
}
/* push pull or open drain  */
void MGPIO_voidSetPinOutPutType(u8 Copy_u8PortName ,u8 Copy_u8PinNum ,u8 Copy_u8OutPutType  )
{
	switch(Copy_u8PortName)
	{
		case PORTA : GPIOA_OTYPER | = Copy_u8OutPutType<<(Copy_u8PinNum));  break;
		case PORTB : GPIOB_OTYPER | = Copy_u8OutPutType<<(Copy_u8PinNum));  break;
		default    :                                                        break;
	}	
}

void MGPIO_voidSetPinOutPutSpeed(u8 Copy_u8PortName ,u32 Copy_u8PinNum ,u32 Copy_u8OutSpeed )
{
	switch(Copy_u8PortName)
	{
		case PORTA : GPIOA_OSPEEDER | = Copy_u8OutSpeed<<(2*Copy_u8PinNum));  break;
		case PORTB : GPIOB_OSPEEDER | = Copy_u8OutSpeed<<(2*Copy_u8PinNum));  break;
		default    :                                                          break;
	}		
}

void MGPIO_voidSetPullType(u8 Copy_u8PortName ,u32 Copy_u8PinNum ,u32 Copy_u8PullType )
{
	switch(Copy_u8PortName)
	{
		case PORTA : GPIOA_PUPDR | = Copy_u8PullType<<(2*Copy_u8PinNum));  break;
		case PORTB : GPIOB_PUPDR | = Copy_u8PullType<<(2*Copy_u8PinNum));  break;
		default    :                                                       break;
	}	
}

u8 MGPIO_u8ReadData(u8 Copy_u8PORT ,u8 Copy_u8PinNum)
{
	u8 Local_u8Data ;
	switch(Copy_u8PortName)
	{
		case PORTA :Local_u8Data = GET_BIT(GPIOA_IDR ,Copy_u8PinNum);  break;
		case PORTB :Local_u8Data = GET_BIT(GPIOB_IDR ,Copy_u8PinNum);  break;
		default    :                                                   break;
	}
    return 	Local_u8Data;
}

void MGPIO_voidWriteData(u8 Copy_u8PortName ,u8 Copy_u8PinNum ,u8 Copy_u8State)
{
	switch(Copy_u8PortName)
	{
		case PORTA : GPIOA_ODR | = Copy_u8State<<(Copy_u8PinNum));  break;
		case PORTB : GPIOB_ODR | = Copy_u8State<<(Copy_u8PinNum));  break;
		default    :                                                break;
	}
}

void MGPIO_voidPinLock(u8 Copy_u8PortNum ,u8 Copy_u8PinNum )
{
	u32 Local_u8Read;
	switch(Copy_u8PortName)
	{
		case PORTA : SET_BIT(GPIOA_LCKR ,Copy_u8PinNum));
                     SET_BIT(GPIOA_LCKR ,LUCKED_PIN));
					 CLR_BIT(GPIOA_LCKR ,LUCKED_PIN));
					 SET_BIT(GPIOA_LCKR ,LUCKED_PIN));
					 Local_u8Read = GPIOA_LCKR;
       		         break;
		case PORTB : SET_BIT(GPIOB_LCKR ,Copy_u8PinNum));
                     SET_BIT(GPIOB_LCKR ,LUCKED_PIN));
					 CLR_BIT(GPIOB_LCKR ,LUCKED_PIN));
					 SET_BIT(GPIOB_LCKR ,LUCKED_PIN));
					 Local_u8Read = GPIOB_LCKR;
       		         break;
		default    :                                                 break;
	}
}

void MGPIO_vDirectSetReset(u8 Copy_u8PortName , u8 Copy_u8PinNum, u8 Copy_u8State)
{
	switch(Copy_u8PortName)
	{
		case PORTA : if(Copy_u8State == HIGH)
		               {
                        SET_BIT(GPIOA_BSRR ,Copy_u8PinNum));
					   }
                     else
					 {
						 Copy_u8PinNum+=16;
                       SET_BIT(GPIOA_BSRR ,Copy_u8PinNum);
					 }		                                        break;			   
		case PORTB : if(Copy_u8State == HIGH)
		               {
                        SET_BIT(GPIOB_BSRR ,Copy_u8PinNum));
					   }
                     else
					 {
						 Copy_u8PinNum+=16;
                       SET_BIT(GPIOB_BSRR ,Copy_u8PinNum);
					 }	                                            break;
		default    :                                                break;
	}	
}

void MGPIO_voidSetPinAltFn( u8 Copy_u8PortNum ,u8 Copy_u8PinNum, u8 Copy_u8ALF )
{
	switch(Copy_u8PortName)
	{
		if(Copy_u8PinNum<=7)
		{
		case PORTA : GPIOA_ODR | = Copy_u8ALF<<(4*Copy_u8PinNum));  break;
		case PORTB : GPIOB_ODR | = Copy_u8ALF<<(4*Copy_u8PinNum));  break;
		default    :                                                break;
	    }
		else
		{
			Copy_u8PinNum-=8;
		case PORTA : GPIOA_ODR | = Copy_u8ALF<<(4*Copy_u8PinNum));  break;
		case PORTB : GPIOB_ODR | = Copy_u8ALF<<(4*Copy_u8PinNum));  break;
		default    :                                                break;	
	    }
	}
}
