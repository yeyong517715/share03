/* -----------------------------------------------------------------

* �ļ�����	����˾40.68mhz-25w����ʽ�豸����ʽ���ư�֮LED�ƿ��Ƴ��� *
* ʱ�䣺		2022��7��5��							    		   											*
* ��д�ߣ�	Ҷ��												   														*
* �汾�� 	share03_led_v1.0								   		   										*
* MCU:		GD32F250C8T6	                             		  					  *

 ----------------------------------------------------------------    */

/**********************************************************************
***����˵����
	���ư�԰����ư��LED�ƿ���





**********************************************************************/

/**********************************************************************
***�޸ļ�¼��

***********************************************************************/

#ifndef __LED_H
#define __LED_H

#include <gd32f3x0_gpio.h>

/* ����led�ƿ�������˸ */
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


/* �������� */
void share03_LED_Init(void);

#endif

