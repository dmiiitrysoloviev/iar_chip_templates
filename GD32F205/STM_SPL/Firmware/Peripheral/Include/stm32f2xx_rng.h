/**
  ******************************************************************************
  * @file    stm32f2xx_rng.h
  * @author  MCD Application Team
  * @version V1.1.3
  * @date    31-December-2021 
  * @brief   This file contains all the functions prototypes for the Random 
  *          Number Generator(RNG) firmware library.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2012 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32F2xx_RNG_H
#define __STM32F2xx_RNG_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f2xx.h"

/** @addtogroup STM32F2xx_StdPeriph_Driver
  * @{
  */

/** @addtogroup RNG
  * @{
  */ 

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/ 

/** @defgroup RNG_Exported_Constants
  * @{
  */
  
/** @defgroup RNG_flags_definition  
  * @{
  */ 
#define RNG_FLAG_DRDY               ((uint8_t)0x0001) /*!< Data ready */
#define RNG_FLAG_CECS               ((uint8_t)0x0002) /*!< Clock error current status */
#define RNG_FLAG_SECS               ((uint8_t)0x0004) /*!< Seed error current status */

#define IS_RNG_GET_FLAG(RNG_FLAG) (((RNG_FLAG) == RNG_FLAG_DRDY) || \
                                   ((RNG_FLAG) == RNG_FLAG_CECS) || \
                                   ((RNG_FLAG) == RNG_FLAG_SECS))
#define IS_RNG_CLEAR_FLAG(RNG_FLAG) (((RNG_FLAG) == RNG_FLAG_CECS) || \
                                    ((RNG_FLAG) == RNG_FLAG_SECS))
/**
  * @}
  */ 

/** @defgroup RNG_interrupts_definition   
  * @{
  */  
#define RNG_IT_CEI                  ((uint8_t)0x20) /*!< Clock error interrupt */
#define RNG_IT_SEI                  ((uint8_t)0x40) /*!< Seed error interrupt */

#define IS_RNG_IT(IT) ((((IT) & (uint8_t)0x9F) == 0x00) && ((IT) != 0x00))
#define IS_RNG_GET_IT(RNG_IT) (((RNG_IT) == RNG_IT_CEI) || ((RNG_IT) == RNG_IT_SEI))
/**
  * @}
  */ 

/**
  * @}
  */ 

/* Exported macro ------------------------------------------------------------*/
/* Exported functions --------------------------------------------------------*/ 

/*  Function used to set the RNG configuration to the default reset state *****/ 
void RNG_DeInit(void);

/* Configuration function *****************************************************/
void RNG_Cmd(FunctionalState NewState);

/* Get 32 bit Random number function ******************************************/
uint32_t RNG_GetRandomNumber(void);

/* Interrupts and flags management functions **********************************/
void RNG_ITConfig(FunctionalState NewState);
FlagStatus RNG_GetFlagStatus(uint8_t RNG_FLAG);
void RNG_ClearFlag(uint8_t RNG_FLAG);
ITStatus RNG_GetITStatus(uint8_t RNG_IT);
void RNG_ClearITPendingBit(uint8_t RNG_IT);

#ifdef __cplusplus
}
#endif

#endif /*__STM32F2xx_RNG_H */

/**
  * @}
  */ 

/**
  * @}
  */ 
