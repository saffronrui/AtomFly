#ifndef __VFD_H__
#define __VFD_H__
#include <stdbool.h>
#include "sys.h"

#define	RS_SET()		GPIO_SetBits(GPIOA, GPIO_Pin_12);
#define	RS_RESET()	GPIO_ResetBits(GPIOA, GPIO_Pin_12);
#define	WR_SET()		GPIO_SetBits(GPIOA, GPIO_Pin_12);
#define	WR_RESET()	GPIO_ResetBits(GPIOA, GPIO_Pin_12);
#define	RST_SET()		GPIO_SetBits(GPIOA, GPIO_Pin_12);
#define	RS_RESET()	GPIO_ResetBits(GPIOA, GPIO_Pin_12);

//void ws2812Init(void);
//void setHeadlightsOn(bool state);
//void ws2812PowerControl(bool state);
//void ws2812Send(uint8_t (*color)[3], uint16_t len);
//void ws2812DmaIsr(void);

#endif /*__VFD_H__*/
