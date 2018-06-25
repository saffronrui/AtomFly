#include <stdio.h>
#include "config.h"
#include "stdbool.h"
#include "delay.h"
#include "vfd.h"


void VFD_Reset(void)
{
		RST_SET();
		delay_us(5);
		RST_RESET();
		delay_us(5);
		RST_SET();
}

void I80_WRITE_BYTE(unsigned int data)
{
		GPIO_Write(GPIOA, data);
		WR_SET();
		RS_RESET();
		delay_us(1);
		WR_RESET();
		delay_us(1);
		WR_SET();

}
GPIO_SetBits(leds[led].port, leds[led].pin);