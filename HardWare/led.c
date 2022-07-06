/* -----------------------------------------------------------------

* 文件名：	洛神公司40.68mhz-25w分体式设备分体式控制板之LED灯控制程序 *
* 时间：		2022年7月5日							    		   											*
* 编写者：	叶勇												   														*
* 版本号 	share03_led_v1.0								   		   										*
* MCU:		GD32F250C8T6	                             		  					  *

 ----------------------------------------------------------------*/

/**********************************************************************
***功能说明：
	控制板对按键灯板的LED灯控制





**********************************************************************/

/**********************************************************************
***修改记录：

***********************************************************************/


#include "led.h"


/****************************************************************************
*
*	函数名：	void share03_LED_Init(void)  																		*
*	
*	入口参数：	无																														*
*
*	返回值：	无																															*
*
*	说明：		将涉及到LED的gpio引脚，设置为推完输出，上拉，50MHZ							*
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
