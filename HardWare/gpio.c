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

#include "gpio.h"
/****************************************************************************
*
*	��������	void share03_GPIO_Init(void)  																	*
*	
*	��ڲ�����	��																														*
*
*	����ֵ��	��																															*
*
*	˵����		���漰��gpio���ţ�����key,fan,speak,�����ŵ�����								*
*																																						*
*****************************************************************************/
void share03_GPIO_Init(void)
{
		rcu_periph_clock_enable(RCU_GPIOB);
		/*
		PB10	->	SPEAK
		PB11	->	FAN			
		PB15	->	RF_7.4V
		*/
    gpio_mode_set(GPIOB, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, GPIO_PIN_10|GPIO_PIN_11|GPIO_PIN_15);
    gpio_output_options_set(GPIOB, GPIO_OTYPE_PP, GPIO_OSPEED_MAX, GPIO_PIN_10|GPIO_PIN_11|GPIO_PIN_15);
    gpio_bit_set(GPIOB, GPIO_PIN_10|GPIO_PIN_11|GPIO_PIN_15);
		
		/* enable the GPIO clock */
    rcu_periph_clock_enable(RCU_GPIOA); 
		/* 	PA8	->	��ѹģ�� 
				PA12 -> RF_OUT
		*/
    gpio_mode_set(GPIOA, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, GPIO_PIN_8|GPIO_PIN_12);
    gpio_output_options_set(GPIOA, GPIO_OTYPE_PP, GPIO_OSPEED_MAX, GPIO_PIN_8|GPIO_PIN_12);
    gpio_bit_set(GPIOA, GPIO_PIN_12);
		gpio_bit_reset(GPIOA,GPIO_PIN_8);
		/* PA11  -> KEY */
		gpio_mode_set(GPIOA, GPIO_MODE_INPUT, GPIO_PUPD_PULLUP, GPIO_PIN_11);

}


