/**
  ******************************************************************************
  * @file    stm32f2xx_wwdg.h
  * @author  MCD Application Team
  * @version V1.1.3
  * @date    31-December-2021 
  * @brief   This file contains all the functions prototypes for the WWDG firmware
  *          library.
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
#ifndef __STM32F2xx_WWDG_H
#define __STM32F2xx_WWDG_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f2xx.h"

/** @addtogroup STM32F2xx_StdPeriph_Driver
  * @{
  */

/** @addtogroup WWDG
  * @{
  */ 

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/

/** @defgroup WWDG_Exported_Constants
  * @{
  */ 
  
/** @defgroup WWDG_Prescaler 
  * @{
  */
  
#define WWDG_Prescaler_1    ((uint32_t)0x00000000)
#define WWDG_Prescaler_2    ((uint32_t)0x00000080)
#define WWDG_Prescaler_4    ((uint32_t)0x00000100)
#define WWDG_Prescaler_8    ((uint32_t)0x00000180)
#define IS_WWDG_PRESCALER(PRESCALER) (((PRESCALER) == WWDG_Prescaler_1) || \
                                      ((PRESCALER) == WWDG_Prescaler_2) || \
                                      ((PRESCALER) == WWDG_Prescaler_4) || \
                                      ((PRESCALER) == WWDG_Prescaler_8))
#define IS_WWDG_WINDOW_VALUE(VALUE) ((VALUE) <= 0x7F)
#define IS_WWDG_COUNTER(COUNTER) (((COUNTER) >= 0x40) && ((COUNTER) <= 0x7F))

/**
  * @}
  */ 

/**
  * @}
  */ 

/* Exported macro ------------------------------------------------------------*/
/* Exported functions --------------------------------------------------------*/
  
/*  Function used to set the WWDG configuration to the default reset state ****/  
void WWDG_DeInit(void);

/* Prescaler, Refresh window and Counter configuration functions **************/
void WWDG_SetPrescaler(uint32_t WWDG_Prescaler);
void WWDG_SetWindowValue(uint8_t WindowValue);
void WWDG_EnableIT(void);
void WWDG_SetCounter(uint8_t Counter);

/* WWDG activation function ***************************************************/
void WWDG_Enable(uint8_t Counter);

/* Interrupts and flags management functions **********************************/
FlagStatus WWDG_GetFlagStatus(void);
void WWDG_ClearFlag(void);

#ifdef __cplusplus
}
#endif

#endif /* __STM32F2xx_WWDG_H */

/**
  * @}
  */ 

/**
  * @}
  */ 

