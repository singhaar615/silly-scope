#ifndef SILLYSCOPE_APP_H
#define SILLYSCOPE_APP_H

#include <stdbool.h>
#include "stm32l4xx_hal.h"

extern SPI_HandleTypeDef *disp_spi;

void sillyscope_app(void);

#endif