/*****************************************************************************/
/* Auther       : Mona Safwat                                                */ 
/* Date         : 11 June 2023                                               */
/* Version      : V01                                                        */
/*****************************************************************************/
#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H

#define AHB1                0
#define AHB2                1
#define APB1                2
#define APB2                3

#define     HSE                       0
#define     HSI                       1
#define     PLL                       2

#define     HSE_CRYSTAL               0
#define     HSE_RC                    1

#define     HSE_PLL                   0
#define     HSI_PLL                   1

void MRCC_voidEnablePeripheralClock (u8 BusName , u8 Copy_u8PerNum );
void MRCC_voidDisablePeripheralClock(u8 BusName , u8 Copy_u8PerNum );
void MRCC_voidEnableSecuritySystem(void);
void MRCC_voidDisableSecuritySystem(void);
void  MRCC_voidInitClock(void);





/*   AHB1  Peripheral enable bits */  
#define     PERIPHERAL_EN_GPIOA       0
#define     PERIPHERAL_EN_GPIOB       1
#define     PERIPHERAL_EN_GPIOC       2
#define     PERIPHERAL_EN_GPIOD       3
#define     PERIPHERAL_EN_GPIOE       4
#define     PERIPHERAL_EN_GPIOH       7
#define     PERIPHERAL_EN_CRC         12
#define     PERIPHERAL_EN_DMA1        21
#define     PERIPHERAL_EN_DMA2        22

/*   AHB2  Peripheral enable bits */  
#define     PERIPHERAL_EN_OTGFS       7

/*   APB1  Peripheral enable bits */  
#define     PERIPHERAL_EN_TIMER2      0
#define     PERIPHERAL_EN_TIMER3      1
#define     PERIPHERAL_EN_TIMER4      2
#define     PERIPHERAL_EN_TIMER5      3
#define     PERIPHERAL_EN_WWDG        11
#define     PERIPHERAL_EN_SPI2        14
#define     PERIPHERAL_EN_SPI3        15
#define     PERIPHERAL_EN_USART2      17
#define     PERIPHERAL_EN_I2C1        21
#define     PERIPHERAL_EN_I2C2        22
#define     PERIPHERAL_EN_I2C3        23
#define     PERIPHERAL_EN_PWR         28

/*   APB2  Peripheral enable bits */  
#define     PERIPHERAL_EN_TIMER1      0
#define     PERIPHERAL_EN_USART1      4
#define     PERIPHERAL_EN_USART6      5
#define     PERIPHERAL_EN_ADC1        8
#define     PERIPHERAL_EN_SDIO        11
#define     PERIPHERAL_EN_SPI1        12
#define     PERIPHERAL_EN_SPI4        13
#define     PERIPHERAL_EN_SYSCFG      14
#define     PERIPHERAL_EN_TIMER9      16
#define     PERIPHERAL_EN_TIMER10     17
#define     PERIPHERAL_EN_TIMER11     18

#endif