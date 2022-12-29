#ifndef __STM32F1xx_HAL_I2C_H
#define __STM32F1xx_HAL_I2C_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/** @addtogroup STM32F1xx_HAL_Driver
  * @{
  */

/** @addtogroup I2C
  * @{
  */

/* Exported types ------------------------------------------------------------*/ 

/** 
  * @brief  I2C Configuration Structure definition  
  */
typedef struct
{
  uint32_t ClockSpeed;                /*!< Specifies the clock frequency.
                                           This parameter must be set to a value lower than 400kHz */

  uint32_t DutyCycle;                /*!< Specifies the I2C fast mode duty cycle.
                                           This parameter can be a value of @ref I2C_duty_cycle_in_fast_mode */

  uint32_t OwnAddress1;               /*!< Specifies the first device own address.
                                           This parameter can be a 7-bit or 10-bit address. */

  uint32_t AddressingMode;            /*!< Specifies if 7-bit or 10-bit addressing mode is selected.
                                           This parameter can be a value of @ref I2C_addressing_mode */

  uint32_t DualAddressMode;           /*!< Specifies if dual addressing mode is selected.
                                           This parameter can be a value of @ref I2C_dual_addressing_mode */

  uint32_t OwnAddress2;               /*!< Specifies the second device own address if dual addressing mode is selected
                                           This parameter can be a 7-bit address. */

    uint32_t NoStretchMode;             /*!< Specifies if nostretch mode is selected.
                                           This parameter can be a value of @ref I2C_nostretch_mode */

}I2C_InitTypeDef;

/** 
  * @brief  I2C handle Structure definition  
  */ 
typedef struct
{
  I2C_TypeDef                *Instance;  /*!< I2C registers base address */

  I2C_InitTypeDef            Init;       /*!< I2C communication parameters */

  uint8_t                    *pBuffPtr;  /*!< Pointer to I2C transfer buffer */

  uint16_t                   XferSize;   /*!< I2C transfer size */

  __IO uint16_t              XferCount;  /*!< I2C transfer counter */

  __IO uint32_t              XferOptions; /*!< I2C transfer options */

  __IO uint32_t              PreviousState;  /*!< I2C communication Previous state */

  HAL_LockTypeDef            Lock;       /*!< I2C locking object */

  __IO HAL_I2C_StateTypeDef  State;      /*!< I2C communication state */

  __IO uint32_t              ErrorCode;  /*!< I2C Error code */

}I2C_HandleTypeDef;

/* Exported constants --------------------------------------------------------*/

/** @defgroup I2C_Exported_Constants
  * @{
  */

/** @defgroup I2C_duty_cycle_in_fast_mode 
  * @{
  */
#define I2C_DUTYCYCLE_2                 ((uint32_t)0x00000000U)
#define I2C_DUTYCYCLE_16_9              I2C_CCR_DUTY

#define IS_I2C_DUTY_CYCLE(CYCLE) (((CYCLE) == I2C_DUTYCYCLE_2) || \
                                  ((CYCLE) == I2C_DUTYCYCLE_16_9))
/**
  * @}
  */

/** @defgroup I2C_addressing_mode 
  * @{
  */
#define I2C_ADDRESSINGMODE_7BIT          ((uint32_t)0x00000001U)
#define I2C_ADDRESSINGMODE_10BIT         ((uint32_t)0x00000002U)

#define IS_I2C_ADDRESSING_MODE(MODE) (((MODE) == I2C_ADDRESSINGMODE_7BIT) || \
                                      ((MODE) == I2C_ADDRESSINGMODE_10BIT))
/**
  * @}
  */

/** @defgroup I2C_dual_addressing_mode 
  * @{
  */
#define I2C_DUALADDRESS_DISABLE          ((uint32_t)0x00000000U)
#define I2C_DUALADDRESS_ENABLE           ((uint32_t)0x00000001U)

#define IS_I2C_DUAL_ADDRESS(ADDRESS) (((ADDRESS) == I2C_DUALADDRESS_DISABLE) || \
                                      ((ADDRESS) == I2C_DUALADDRESS_ENABLE))
/**
  * @}
  */

/** @defgroup I2C_general_call_addressing_mode 
  * @{
  */
#define I2C_GENERALCALL_DISABLE          ((uint32_t)0x00000000U)
#define I2C_GENERALCALL_ENABLE           ((uint32_t)0x00000001U)

#define IS_I2C_GENERAL_CALL_ADDRESS(ADDRESS) (((ADDRESS) == I2C_GENERALCALL_DISABLE) || \
                                               ((ADDRESS) == I2C_GENERALCALL_ENABLE))
/**
  * @}
  */

/** @defgroup I2C_nostretch_mode 
  * @{
  */
#define I2C_NOSTRETCH_DISABLE            ((uint32_t)0x00000000U)
#define I2C_NOSTRETCH_ENABLE             ((uint32_t)0x00000001U)

#define IS_I2C_NOSTRETCH(NOSTRETCH) (((NOSTRETCH) == I2C_
