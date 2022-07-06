/* -----------------------------------------------------------------

* 文件名：	洛神公司40.68mhz-25w分体式设备分体式控制板之LED灯控制程序 *
* 时间：		2022年7月5日							    		   											*
* 编写者：	叶勇												   														*
* 版本号 	share03_led_v1.0								   		   										*
* MCU:		GD32F250C8T6	                             		  					  *

 ----------------------------------------------------------------    */

/**********************************************************************
***功能说明：
	控制板对按键灯板的LED灯控制





**********************************************************************/

/**********************************************************************
***修改记录：

***********************************************************************/

#ifndef __LED_H
#define __LED_H

#include <gd32f3x0_gpio.h>

/* 配置led灯开、灭、闪烁 */
#define Run_LED_ON  			gpio_bit_reset(GPIOB, GPIO_PIN_2)
#define	Run_LED_OFF				gpio_bit_set(GPIOB, GPIO_PIN_2)
#define	Run_LED_Toggle		gpio_bit_toggle(GPIOB, GPIO_PIN_2)

#define LED0_R_ON  				gpio_bit_reset(GPIOA, GPIO_PIN_15)
#define	LED0_R_OFF				gpio_bit_set(GPIOA, GPIO_PIN_15)
#define	LED0_R_Toggle			gpio_bit_toggle(GPIOA, GPIO_PIN_15)

#define LED0_W_ON  				gpio_bit_reset(GPIOB, GPIO_PIN_3)
#define	LED0_W_OFF				gpio_bit_set(GPIOB, GPIO_PIN_3)
#define	LED0_W_Toggle			gpio_bit_toggle(GPIOB, GPIO_PIN_3)

#define LED1_R_ON  				gpio_bit_reset(GPIOB, GPIO_PIN_4)
#define	LED1_R_OFF				gpio_bit_set(GPIOB, GPIO_PIN_4)
#define	LED1_R_Toggle			gpio_bit_toggle(GPIOB, GPIO_PIN_4)

#define LED1_W_ON  				gpio_bit_reset(GPIOB, GPIO_PIN_5)
#define	LED1_W_OFF				gpio_bit_set(GPIOB, GPIO_PIN_5)
#define	LED1_W_Toggle			gpio_bit_toggle(GPIOB, GPIO_PIN_5)

#define LED2_R_ON  				gpio_bit_reset(GPIOB, GPIO_PIN_6)
#define	LED2_R_OFF				gpio_bit_set(GPIOB, GPIO_PIN_6)
#define	LED2_R_Toggle			gpio_bit_toggle(GPIOB, GPIO_PIN_6)

#define LED2_W_ON  				gpio_bit_reset(GPIOB, GPIO_PIN_7)
#define	LED2_W_OFF				gpio_bit_set(GPIOB, GPIO_PIN_7)
#define	LED2_W_Toggle			gpio_bit_toggle(GPIOB, GPIO_PIN_7)

#define LED3_R_ON  				gpio_bit_reset(GPIOB, GPIO_PIN_8)
#define	LED3_R_OFF				gpio_bit_set(GPIOB, GPIO_PIN_8)
#define	LED3_R_Toggle			gpio_bit_toggle(GPIOB, GPIO_PIN_8)

#define LED3_W_ON  				gpio_bit_reset(GPIOB, GPIO_PIN_9)
#define	LED3_W_OFF				gpio_bit_set(GPIOB, GPIO_PIN_9)
#define	LED3_W_Toggle			gpio_bit_toggle(GPIOB, GPIO_PIN_9)


/* 函数申明 */
void share03_LED_Init(void);

#endif

