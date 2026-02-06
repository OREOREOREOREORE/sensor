/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define IR0_Pin GPIO_PIN_0
#define IR0_GPIO_Port GPIOC
#define IR1_Pin GPIO_PIN_1
#define IR1_GPIO_Port GPIOC
#define IR2_Pin GPIO_PIN_2
#define IR2_GPIO_Port GPIOC
#define IR3_Pin GPIO_PIN_3
#define IR3_GPIO_Port GPIOC
#define IR4_Pin GPIO_PIN_0
#define IR4_GPIO_Port GPIOA
#define IR5_Pin GPIO_PIN_1
#define IR5_GPIO_Port GPIOA
#define IR6_Pin GPIO_PIN_2
#define IR6_GPIO_Port GPIOA
#define IR7_Pin GPIO_PIN_3
#define IR7_GPIO_Port GPIOA
#define IR8_Pin GPIO_PIN_4
#define IR8_GPIO_Port GPIOA
#define IR9_Pin GPIO_PIN_5
#define IR9_GPIO_Port GPIOA
#define IR10_Pin GPIO_PIN_6
#define IR10_GPIO_Port GPIOA
#define IR11_Pin GPIO_PIN_7
#define IR11_GPIO_Port GPIOA
#define IR12_Pin GPIO_PIN_4
#define IR12_GPIO_Port GPIOC
#define IR13_Pin GPIO_PIN_5
#define IR13_GPIO_Port GPIOC
#define IR14_Pin GPIO_PIN_0
#define IR14_GPIO_Port GPIOB
#define IR15_Pin GPIO_PIN_1
#define IR15_GPIO_Port GPIOB
#define LED1_Pin GPIO_PIN_11
#define LED1_GPIO_Port GPIOC
#define cs1_Pin GPIO_PIN_2
#define cs1_GPIO_Port GPIOD

/* USER CODE BEGIN Private defines */
#define gpio_set(gpio) HAL_GPIO_WritePin(gpio##_GPIO_Port, gpio##_Pin, GPIO_PIN_SET)
#define gpio_reset(gpio) HAL_GPIO_WritePin(gpio##_GPIO_Port, gpio##_Pin, GPIO_PIN_RESET)
#define gpio_toggle(gpio) HAL_GPIO_TogglePin(gpio##_GPIO_Port, gpio##_Pin)
#define gpio_read(gpio) HAL_GPIO_ReadPin(gpio##_GPIO_Port, gpio##_Pin)

#define led_on(led) gpio_reset(led) // notice that reset the pin turns the led on
#define led_off(led) gpio_set(led)
#define led_toggle(led) gpio_toggle(led)
#define btn_read(btn) !gpio_read(btn)
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
