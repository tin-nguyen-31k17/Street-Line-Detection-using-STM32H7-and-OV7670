/**
 * @file ov7670.c
 * @brief Main source file for the OV7670 camera module.
 *
 * @details pinkeee @ j.t0dd@protonmail.com
 * @note See README for contributing guides and info.
 * @copyright See License file.
 */

#include "ov7670.h"

/* Global I2C for driver so user never has to pass handler again. */
I2C_HandleTypeDef *OV7670_I2C;

bool OV7670_init(I2C_HandleTypeDef *hi2c)
{
  /* Set driver handler to argument. */
  assert_param(IS_I2C_ALL_INSTANCE(hi2c->Instance));
  OV7670_I2C = hi2c;

  /* Start setting registers. This is using pure I2C not SCCB, don't have hardware yet.
   * Additionally, this is transmitting without DMA, very bad for a camera driver but
   * just get it to work first then add things like DMA and interrupts.
   *
   * I have a feeling that this can get much better, maybe make one big buffer
   * and then transmit that instead??!?!?!? this looks so so so bad it hurts.
  */
  HAL_I2C_Master_Transmit(OV7670_I2C, OV7670_WRITE_ADDRESS, &OV7670_COM7_SOFT_RESET, sizeof(OV7670_COM7_SOFT_RESET), OV7670_TIMEOUT);
  HAL_I2C_Master_Transmit(OV7670_I2C, OV7670_WRITE_ADDRESS, &OV7670_CLKRC_RESET_VALUE, sizeof(OV7670_CLKRC_RESET_VALUE), OV7670_TIMEOUT);
  HAL_I2C_Master_Transmit(OV7670_I2C, OV7670_WRITE_ADDRESS, &OV7670_TSLB_RESET_VALUE, sizeof(OV7670_TSLB_RESET_VALUE), OV7670_TIMEOUT);
  HAL_I2C_Master_Transmit(OV7670_I2C, OV7670_WRITE_ADDRESS, &OV7670_COM7_RESET_VALUE, sizeof(OV7670_COM7_RESET_VALUE), OV7670_TIMEOUT);

  HAL_I2C_Master_Transmit(OV7670_I2C, OV7670_WRITE_ADDRESS, &OV7670_HSTART_RESET_VALUE, sizeof(OV7670_HSTART_RESET_VALUE), OV7670_TIMEOUT);
  HAL_I2C_Master_Transmit(OV7670_I2C, OV7670_WRITE_ADDRESS, &OV7670_HSTOP_RESET_VALUE, sizeof(OV7670_HSTOP_RESET_VALUE), OV7670_TIMEOUT);
  HAL_I2C_Master_Transmit(OV7670_I2C, OV7670_WRITE_ADDRESS, &OV7670_HREF_RESET_VALUE, sizeof(OV7670_HREF_RESET_VALUE), OV7670_TIMEOUT);
  HAL_I2C_Master_Transmit(OV7670_I2C, OV7670_WRITE_ADDRESS, &OV7670_VSTART_RESET_VALUE, sizeof(OV7670_VSTART_RESET_VALUE), OV7670_TIMEOUT);
  HAL_I2C_Master_Transmit(OV7670_I2C, OV7670_WRITE_ADDRESS, &OV7670_VSTOP_RESET_VALUE, sizeof(OV7670_VSTOP_RESET_VALUE), OV7670_TIMEOUT);
  HAL_I2C_Master_Transmit(OV7670_I2C, OV7670_WRITE_ADDRESS, &OV7670_VREF_RESET_VALUE, sizeof(OV7670_VREF_RESET_VALUE), OV7670_TIMEOUT);

  HAL_I2C_Master_Transmit(OV7670_I2C, OV7670_WRITE_ADDRESS, &OV7670_COM14_RESET_VALUE, sizeof(OV7670_COM14_RESET_VALUE), OV7670_TIMEOUT);
  HAL_I2C_Master_Transmit(OV7670_I2C, OV7670_WRITE_ADDRESS, &OV7670_SCALING_XSC_RESET_VALUE, sizeof(OV7670_SCALING_XSC_RESET_VALUE), OV7670_TIMEOUT);
  HAL_I2C_Master_Transmit(OV7670_I2C, OV7670_WRITE_ADDRESS, &OV7670_SCALING_PCLK_DIV_RESET_VALUE, sizeof(OV7670_SCALING_PCLK_DIV_RESET_VALUE), OV7670_TIMEOUT);
}
