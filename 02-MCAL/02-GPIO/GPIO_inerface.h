/*****************************************************************************/
/* Auther       : Mona Safwat                                                */ 
/* Date         : 14 June 2023                                               */
/* Version      : V01                                                        */
/*****************************************************************************/

#ifndef  GPIO_INTERFACE_H
#define  GPIO_INTERFACE_H



#define    PORTA       0
#define    PORTB       1
#define    PORTC       2

#define     PIN0       0
#define     PIN1       1
#define     PIN2       2
#define     PIN3       3
#define     PIN4       4
#define     PIN5       5
#define     PIN6       6
#define     PIN7       7
#define     PIN8       8
#define     PIN9       9
#define     PIN10      10
#define     PIN11      11
#define     PIN12      12
#define     PIN13      13
#define     PIN14      14
#define     PIN15      15

#define     INTPUT                   0b00
#define     OUTPUT                   0b01
#define     ALTERNATE_FUNCTION       0b10
#define     ANALOG                   0b11

#define     OUTPUT_PUSH_PULL          0
#define     OUTPUT_OPEN_DRAIN         1

#define     LOW_SPEED                0b00
#define     MEDIUM_SPEED             0b01
#define     HIGH_SPEED               0b10
#define     VERY_HIGH_SPEED          0b11

#define     NO_PULL                  0b00 
#define     PULL_UP                  0b01 
#define     PULL_DOWN                0b10  

#define     HIGH                  	  1
#define     LOW	                 	  0

#define     ALTFN_0                  0b0000
#define     ALTFN_1                  0b0001
#define     ALTFN_2                  0b0010
#define     ALTFN_3                  0b0011
#define     ALTFN_4                  0b0100
#define     ALTFN_5                  0b0101
#define     ALTFN_6                  0b0110
#define     ALTFN_7                  0b0111
#define     ALTFN_8                  0b1000
#define     ALTFN_9                  0b1001
#define     ALTFN_10                 0b1010
#define     ALTFN_11                 0b1011
#define     ALTFN_12                 0b1100
#define     ALTFN_13                 0b1101
#define     ALTFN_14                 0b1110
#define     ALTFN_15                 0b1111

#define




void MGPIO_voidSetPinMode(u8 Copy_u8PortName ,u8 Copy_u8PinNum ,u8 Copy_u8Mode  );

void MGPIO_voidSetPinOutPutType(u8 Copy_u8PortName ,u8 Copy_u8PinNum ,u8 Copy_u8OutPutType  );

void MGPIO_voidSetPinOutPutSpeed(u8 Copy_u8PortName ,u32 Copy_u8PinNum ,u32 Copy_u8OutSpeed );

void MGPIO_voidSetPullType(u8 Copy_u8PortName ,u32 Copy_u8PinNum ,u32 Copy_u8PullType );

u8 MGPIO_u8ReadData(u8 Copy_u8PORT ,u8 Copy_u8PinNum);

void MGPIO_voidWriteData(u8 Copy_u8PortName ,u8 Copy_u8PinNum ,u8 Copy_u8State);

void MGPIO_voidPinLock(u8 Copy_u8PortNum ,u8 Copy_u8PinNum );

void MGPIO_vDirectSetReset(u8 Copy_u8PortName , u8 Copy_u8PinNum, u8 Copy_u8State);

void MGPIO_voidSetPinAltFn( u8 Copy_u8PortNum ,u8 Copy_u8PinNum, u8 Copy_u8ALF );

#endif