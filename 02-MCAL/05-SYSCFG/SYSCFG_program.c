/*****************************************************************************/
/* Auther       : Mona Safwat                                                */ 
/* Date         : 6 Jul 2023                                                 */
/* Version      : V01                                                        */
/*****************************************************************************/ 

void SYSCFG_voidSetEXTIConfig(u8 copy_u8Line,u8 copy_u8Pin)
{
	u8 Local_u8RegIndex=0;
	u8 Local_u8Pin     =0;
	Local_u8RegIndex=copy_u8Line/4;
	Local_u8Pin     =copy_u8Line%4;     
	SYSCFG_t->EXTICR[Local_u8RegIndex]&~=((0b1111)<<(Local_u8Pin*4));
	SYSCFG_t->EXTICR[Local_u8RegIndex]|=((copy_u8Pin)<<(Local_u8Pin*4));

	
}


