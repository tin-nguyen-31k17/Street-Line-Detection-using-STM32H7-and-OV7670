#ifndef STM32F1XX_HAL_H
#define STM32F1XX_HAL_H

#include <stdint.h>

// define constants for different microcontroller families
#define STM32F100xB  100
#define STM32F100xE  101
#define STM32F101x6  102
#define STM32F101xB  103
#define STM32F101xE  104
#define STM32F101xG  105
#define STM32F102x6  106
#define STM32F102xB  107
#define STM32F103x6  108
#define STM32F103xB  109
#define STM32F103xE  110
#define STM32F103xG  111
#define STM32F105xC  112
#define STM32F107xC  113

// define constants for different microcontroller clock speeds
#define HSI_VALUE    8000000  // internal 8 MHz oscillator
#define HSE_VALUE    8000000  // external 8 MHz oscillator
#define LSI_VALUE    40000    // internal 40 kHz oscillator
#define LSE_VALUE    32768    // external 32.768 kHz oscillator

// define constants for different microcontroller peripherals
#define ADC1         ((ADC_TypeDef *) ADC1_BASE)
#define ADC2         ((ADC_TypeDef *) ADC2_BASE)
#define ADC3         ((ADC_TypeDef *) ADC3_BASE)
#define CAN1         ((CAN_TypeDef *) CAN1_BASE)
#define CAN2         ((CAN_TypeDef *) CAN2_BASE)
#define CEC          ((CEC_TypeDef *) CEC_BASE)
#define COMP1        ((COMP_TypeDef *) COMP1_BASE)
#define COMP2        ((COMP_TypeDef *) COMP2_BASE)
#define DAC          ((DAC_TypeDef *) DAC_BASE)
#define DBGMCU       ((DBGMCU_TypeDef *) DBGMCU_BASE)
#define DMA1         ((DMA_TypeDef *) DMA1_BASE)
#define DMA2         ((DMA_TypeDef *) DMA2_BASE)
#define ETH          ((ETH_TypeDef *) ETH_BASE)
#define EXTI         ((EXTI_TypeDef *) EXTI_BASE)
#define FLASH        ((FLASH_TypeDef *) FLASH_R_BASE)
#define FSMC_Bank1   ((FSMC_Bank1_TypeDef *) FSMC_Bank1_R_BASE)
#define FSMC_Bank1E  ((FSMC_Bank1E_TypeDef *) FSMC_Bank1E_R_BASE)
#define FSMC_Bank2   ((FSMC_Bank2_TypeDef *) FSMC_Bank2_R_BASE)
#define FSMC_Bank3   ((FSMC_Bank3_TypeDef *) FSMC_Bank3_R_BASE)
#define FSMC_Bank4   ((FSMC_Bank4_TypeDef *) FSMC_Bank4_R_BASE)
#define GPIOA        ((GPIO_TypeDef *) GPIOA_BASE)
#define GPIOB        ((GPIO_TypeDef *) GPIOB_BASE)
#define GPIOC        ((GPIO_TypeDef *) GPIOC_BASE)
#define GPIOD        ((GPIO_TypeDef *) GPIOD_BASE)
#define GPIOE        ((GPIO_TypeDef *) GPIOE_BASE)
#define GPIOF        ((GPIO_TypeDef *) GPIOF_BASE)
#define GPIOG        ((GPIO_TypeDef *) GPIOG_BASE)
#define I2C1         ((I2C_TypeDef *) I2C1_BASE)
#define I2C2         ((I2C_TypeDef *) I2C2_BASE)
#define I2C3         ((I2C_TypeDef *) I2C3_BASE)
#define I2S2ext      ((SPI_TypeDef *) I2S2ext_BASE)
#define I2S3ext      ((SPI_TypeDef *) I2S3ext_BASE)
#define IWDG         ((IWDG_TypeDef *) IWDG_BASE)
#define PWR          ((PWR_TypeDef *) PWR_BASE)
#define RCC          ((RCC_TypeDef *) RCC_BASE)
#define RTC          ((RTC_TypeDef *) RTC_BASE)
#define SDIO         ((SDIO_TypeDef *) SDIO_BASE)
#define SPI1         ((SPI_TypeDef *) SPI1_BASE)
#define SPI2         ((SPI_TypeDef *) SPI2_BASE)
#define SPI3         ((SPI_TypeDef *) SPI3_BASE)
#define SysTick      ((SysTick_Type *) SysTick_BASE)
#define TIM1         ((TIM_TypeDef *) TIM1_BASE)
#define TIM2         ((TIM_TypeDef *) TIM2_BASE)
#define TIM3         ((TIM_TypeDef *) TIM3_BASE)
#define TIM4         ((TIM_TypeDef *) TIM4_BASE)
#define TIM5         ((TIM_TypeDef *) TIM5_BASE)
#define TIM6         ((TIM_TypeDef *) TIM6_BASE)
#define TIM7         ((TIM_TypeDef *) TIM7_BASE)
#define TIM8         ((TIM_TypeDef *) TIM8_BASE)
#define TIM9         ((TIM_TypeDef *) TIM9_BASE)
#define TIM10        ((TIM_TypeDef *) TIM10_BASE)
#define TIM11        ((TIM_TypeDef *) TIM11_BASE)
#define TIM12        ((TIM_TypeDef *) TIM12_BASE)
#define TIM13        ((TIM_TypeDef *) TIM13_BASE)
#define TIM14        ((TIM_TypeDef *) TIM14_BASE)
#define TIM15        ((TIM_TypeDef *) TIM15_BASE)
#define TIM16        ((TIM_TypeDef *) TIM16_BASE)
#define TIM17        ((TIM_TypeDef *) TIM17_BASE)
#define USART1       ((USART_TypeDef *) USART1_BASE)
#define USART2       ((USART_TypeDef *) USART2_BASE)
#define USART3       ((USART_TypeDef *) USART3)


