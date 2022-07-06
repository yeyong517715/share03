/* -----------------------------------------------------------------

* �ļ�����	����˾40.68mhz-25w����ʽ�豸����ʽ���ư�֮�����������ų��� *
* ʱ�䣺		2022��7��5��							    		   											*
* ��д�ߣ�	Ҷ��												   														*
* �汾�� 	share03_gpio_v1.0								   		   										*
* MCU:		GD32F250C8T6	                             		  					  *

 ----------------------------------------------------------------    */

/**********************************************************************
***����˵����
	1.���ư�Է��������ƣ�PB10(����Ϊ���������50mhz������)��
	2.���ư�Է��ȵĿ��ƣ�FAN(PB11)����λ���������50mhz��������
	3.���ư����ѹģ��Ŀ��ƣ�12V����ͨ��PA8(����Ϊ���������50MZ,����)��
		����12V�������PA8Ϊ1�������ǹرգ�PA8Ϊ0����
	4.���ư��7.4V��ѹ���ƣ�RF_7.4V����ͨ��PB15������Ϊ���������50mhz����������
	   ����7.5V�������PB15Ϊ0�������ǹرգ�PB15Ϊ1��
	5.RF_OUT����ͨ��PA12(����Ϊ���������50MHZ,����)������RF����Ĺرտ���0���أ�1����
	6.����KEY(PA11������Ϊ��������)��

**********************************************************************/

/**********************************************************************
***�޸ļ�¼��

***********************************************************************/

#ifndef __GPIO_H
#define __GPIO_H
#include <gd32f3x0_gpio.h>
#include "systick.h"


/* ���ø���IO */
/* �������Ŀ��͹� */
#define SPEAK_ON 			gpio_bit_reset(GPIOB, GPIO_PIN_10)
#define SPEAK_OFF			gpio_bit_set(GPIOB, GPIO_PIN_10)
#define	Speak_shrot		SPEAK_ON;delay_1ms(50);	SPEAK_OFF;delay_1ms(50);
#define	Speak_medium	SPEAK_ON;delay_1ms(100);SPEAK_OFF;delay_1ms(50);
#define	Speak_long		SPEAK_ON;delay_1ms(150);SPEAK_OFF;delay_1ms(50);

/* ���ȵĿ��͹� */
#define FAN_ON 			gpio_bit_reset(GPIOB, GPIO_PIN_11)
#define FAN_OFF			gpio_bit_set(GPIOB, GPIO_PIN_11)	

/* ��RF���7.4V�Ŀ��͹� */
#define	RF74V_ON		gpio_bit_reset(GPIOB,GPIO_PIN_15)
#define	RF74V_OFF		gpio_bit_set(GPIOB,GPIO_PIN_15)

/* ��ѹģ��Ŀ��͹� */
#define	SY12V_ON		gpio_bit_set(GPIOA,GPIO_PIN_8)
#define	SY12V_OFF		gpio_bit_reset(GPIOA,GPIO_PIN_8)

/* RF_OUT �Ŀ��͹� */
#define	RF_OUT_ON		gpio_bit_reset(GPIOA,GPIO_PIN_12)
#define	RF_OUT_OFF	gpio_bit_set(GPIOA,GPIO_PIN_12)

/* key �ĺ궨�� */
#define	KEY					gpio_input_bit_get(GPIOA, GPIO_PIN_11)

/* �������� */
void share03_GPIO_Init(void);

#endif

