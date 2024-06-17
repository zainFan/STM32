/**
  ******************************************************************************
  * @file    LwIP/LwIP_HTTP_Server_Raw/Inc/main.h 
  * @author  MCD Application Team
  * @brief   Header for main.c module
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2017 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"
#include "stm324xg_eval.h"
#include "stm324xg_eval_lcd.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
//#define USE_LCD        /* enable LCD  */  
 
/*Static IP ADDRESS: IP_ADDR0.IP_ADDR1.IP_ADDR2.IP_ADDR3 */
#define IP_ADDR0   (uint8_t) 172
#define IP_ADDR1   (uint8_t) 16
#define IP_ADDR2   (uint8_t) 3
#define IP_ADDR3   (uint8_t) 250
   
/*NETMASK*/
#define NETMASK_ADDR0   (uint8_t) 255
#define NETMASK_ADDR1   (uint8_t) 255
#define NETMASK_ADDR2   (uint8_t) 255
#define NETMASK_ADDR3   (uint8_t) 0

/*Gateway Address*/
#define GW_ADDR0   (uint8_t) 172
#define GW_ADDR1   (uint8_t) 16
#define GW_ADDR2   (uint8_t) 3
#define GW_ADDR3   (uint8_t) 254
#define Output5_Pin GPIO_PIN_2
#define Output5_GPIO_Port GPIOE
#define Output4_Pin GPIO_PIN_3
#define Output4_GPIO_Port GPIOE
#define Output3_Pin GPIO_PIN_4
#define Output3_GPIO_Port GPIOE
#define PWM1_Pin GPIO_PIN_5
#define PWM1_GPIO_Port GPIOE
#define PWM2_Pin GPIO_PIN_6
#define PWM2_GPIO_Port GPIOE
#define Output2_Pin GPIO_PIN_13
#define Output2_GPIO_Port GPIOC
#define PWM3_Pin GPIO_PIN_6
#define PWM3_GPIO_Port GPIOF
#define PWM4_Pin GPIO_PIN_7
#define PWM4_GPIO_Port GPIOF
#define Output1_Pin GPIO_PIN_8
#define Output1_GPIO_Port GPIOF
#define LED1_Pin GPIO_PIN_9
#define LED1_GPIO_Port GPIOF
#define Output12_Pin GPIO_PIN_10
#define Output12_GPIO_Port GPIOF
#define Output11_Pin GPIO_PIN_2
#define Output11_GPIO_Port GPIOC
#define Output10_Pin GPIO_PIN_3
#define Output10_GPIO_Port GPIOC
#define Output9_Pin GPIO_PIN_0
#define Output9_GPIO_Port GPIOA
#define Input24_Pin GPIO_PIN_3
#define Input24_GPIO_Port GPIOA
#define Input23_Pin GPIO_PIN_4
#define Input23_GPIO_Port GPIOA
#define Input22_Pin GPIO_PIN_5
#define Input22_GPIO_Port GPIOA
#define Input21_Pin GPIO_PIN_6
#define Input21_GPIO_Port GPIOA
#define Input20_Pin GPIO_PIN_0
#define Input20_GPIO_Port GPIOB
#define Input19_Pin GPIO_PIN_1
#define Input19_GPIO_Port GPIOB
#define Output8_Pin GPIO_PIN_2
#define Output8_GPIO_Port GPIOB
#define Input18_Pin GPIO_PIN_11
#define Input18_GPIO_Port GPIOF
#define Input17_Pin GPIO_PIN_10
#define Input17_GPIO_Port GPIOB
#define Input16_Pin GPIO_PIN_11
#define Input16_GPIO_Port GPIOB
#define Input12_Pin GPIO_PIN_12
#define Input12_GPIO_Port GPIOB
#define Input11_Pin GPIO_PIN_13
#define Input11_GPIO_Port GPIOB
#define Input10_Pin GPIO_PIN_14
#define Input10_GPIO_Port GPIOB
#define Input9_Pin GPIO_PIN_15
#define Input9_GPIO_Port GPIOB
#define Input13_Pin GPIO_PIN_6
#define Input13_GPIO_Port GPIOG
#define Input14_Pin GPIO_PIN_7
#define Input14_GPIO_Port GPIOG
#define Input15_Pin GPIO_PIN_8
#define Input15_GPIO_Port GPIOG
#define USART6_TX_Pin GPIO_PIN_6
#define USART6_TX_GPIO_Port GPIOC
#define USART6_RX_Pin GPIO_PIN_7
#define USART6_RX_GPIO_Port GPIOC
#define Input8_Pin GPIO_PIN_8
#define Input8_GPIO_Port GPIOC
#define Input7_Pin GPIO_PIN_9
#define Input7_GPIO_Port GPIOC
#define Input6_Pin GPIO_PIN_8
#define Input6_GPIO_Port GPIOA
#define USART1_TX_Pin GPIO_PIN_9
#define USART1_TX_GPIO_Port GPIOA
#define USART1_RX_Pin GPIO_PIN_10
#define USART1_RX_GPIO_Port GPIOA
#define CAN1_RX_Pin GPIO_PIN_11
#define CAN1_RX_GPIO_Port GPIOA
#define CAN_TX_Pin GPIO_PIN_12
#define CAN_TX_GPIO_Port GPIOA
#define SetKey_Pin GPIO_PIN_14
#define SetKey_GPIO_Port GPIOA
#define Input5_Pin GPIO_PIN_15
#define Input5_GPIO_Port GPIOA
#define UART4_TX_Pin GPIO_PIN_10
#define UART4_TX_GPIO_Port GPIOC
#define UART4_RX_Pin GPIO_PIN_11
#define UART4_RX_GPIO_Port GPIOC
#define UART5_TX_Pin GPIO_PIN_12
#define UART5_TX_GPIO_Port GPIOC
#define UART5_TXD2_Pin GPIO_PIN_2
#define UART5_TXD2_GPIO_Port GPIOD
#define ETH_RESET_Pin GPIO_PIN_3
#define ETH_RESET_GPIO_Port GPIOD
#define Input4_Pin GPIO_PIN_6
#define Input4_GPIO_Port GPIOD
#define Input3_Pin GPIO_PIN_7
#define Input3_GPIO_Port GPIOD
#define Input2_Pin GPIO_PIN_9
#define Input2_GPIO_Port GPIOG
#define Input1_Pin GPIO_PIN_12
#define Input1_GPIO_Port GPIOG
#define SPI1_SCK_Pin GPIO_PIN_3
#define SPI1_SCK_GPIO_Port GPIOB
#define SPI1_MISO_Pin GPIO_PIN_4
#define SPI1_MISO_GPIO_Port GPIOB
#define SPI1_MOSI_Pin GPIO_PIN_5
#define SPI1_MOSI_GPIO_Port GPIOB
#define Output7_Pin GPIO_PIN_6
#define Output7_GPIO_Port GPIOB
#define Output6_Pin GPIO_PIN_7
#define Output6_GPIO_Port GPIOB
#define IIC_SCL_Pin GPIO_PIN_8
#define IIC_SCL_GPIO_Port GPIOB
#define IIC_SDA_Pin GPIO_PIN_9
#define IIC_SDA_GPIO_Port GPIOB

/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
