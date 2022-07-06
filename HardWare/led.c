/* -----------------------------------------------------------------

* �ļ�����	����˾40.68mhz-25w����ʽ�豸����ʽ���ư�֮LED�ƿ��Ƴ��� *
* ʱ�䣺		2022��7��5��							    		   											*
* ��д�ߣ�	Ҷ��												   														*
* �汾�� 	share03_led_v1.0								   		   										*
* MCU:		GD32F250C8T6	                             		  					  *

 ----------------------------------------------------------------*/

/**********************************************************************
***����˵����
	���ư�԰����ư��LED�ƿ���





**********************************************************************/

/**********************************************************************
***�޸ļ�¼��

***********************************************************************/


#include "led.h"


/****************************************************************************
*
*	��������	void share03_LED_Init(void)  																		*
*	
*	��ڲ�����	��																														*
*
*	����ֵ��	��																															*
*
*	˵����		���漰��LED��gpio���ţ�����Ϊ���������������50MHZ							*
*																																						*
*****************************************************************************/
void share03_LED_Init(void)
{
		/* enable the led clock */
    rcu_periph_clock_enable(RCU_GPIOB);
    /* configure led GPIO port */ 
		/*
		PB2	->	RUN LED;
		PB3	->	LED0_W			
		PB4	->	LED1_R  PB5	->	LED1_W
		PB6	->	LED2_R	PB7	->	LED2_W
		PB8	->	LED3_R	PB8	->	LED3_W
		*/
    gpio_mode_set(GPIOB, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_8|GPIO_PIN_9);
    gpio_output_options_set(GPIOB, GPIO_OTYPE_PP, GPIO_OSPEED_MAX, GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_8|GPIO_PIN_9);
    //gpio_bit_reset(GPIOB, GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_8|GPIO_PIN_9);
	
		/* enable the led clock */
    rcu_periph_clock_enable(RCU_GPIOA);
    /* configure led GPIO port */ 
		/* 	PA15	->	LED0_R */
    gpio_mode_set(GPIOA, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, GPIO_PIN_15);
    gpio_output_options_set(GPIOA, GPIO_OTYPE_PP, GPIO_OSPEED_MAX, GPIO_PIN_15);
		
		
		LED0_R_ON;
		LED1_R_OFF;
		LED2_R_OFF;
		LED3_R_ON;
    //gpio_bit_reset(GPIOA, GPIO_PIN_15);
		LED0_W_OFF;
		LED1_W_ON;
		LED2_W_ON;
		LED3_W_OFF;
		
}
