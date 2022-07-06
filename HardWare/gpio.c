/* -----------------------------------------------------------------

* 文件名：	洛神公司40.68mhz-25w分体式设备分体式控制板之其他控制引脚程序 *
* 时间：		2022年7月5日							    		   											*
* 编写者：	叶勇												   														*
* 版本号 	share03_gpio_v1.0								   		   										*
* MCU:		GD32F250C8T6	                             		  					  *

 ----------------------------------------------------------------    */

/**********************************************************************
***功能说明：
	1.控制板对蜂鸣器控制，PB10(设置为推完输出，50mhz，上拉)。
	2.控制板对风扇的控制，FAN(PB11)设置位推完输出，50mhz，上拉。
	3.控制板对升压模块的控制，12V引脚通过PA8(设置为推完输出，50MZ,上拉)。
		控制12V的输出（PA8为1），还是关闭（PA8为0）。
	4.控制板对7.4V电压控制，RF_7.4V引脚通过PB15（设置为推完输出，50mhz，上拉），
	   控制7.5V的输出（PB15为0），还是关闭（PB15为1）
	5.RF_OUT引脚通过PA12(设置为推完输出，50MHZ,上拉)，控制RF输出的关闭开（0）关（1）。
	6.按键KEY(PA11，设置为上拉输入)。

**********************************************************************/

/**********************************************************************
***修改记录：

***********************************************************************/

#include "gpio.h"
/****************************************************************************
*
*	函数名：	void share03_GPIO_Init(void)  																	*
*	
*	入口参数：	无																														*
*
*	返回值：	无																															*
*
*	说明：		将涉及到gpio引脚，比如key,fan,speak,等引脚的设置								*
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
		/* 	PA8	->	升压模块 
				PA12 -> RF_OUT
		*/
    gpio_mode_set(GPIOA, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, GPIO_PIN_8|GPIO_PIN_12);
    gpio_output_options_set(GPIOA, GPIO_OTYPE_PP, GPIO_OSPEED_MAX, GPIO_PIN_8|GPIO_PIN_12);
    gpio_bit_set(GPIOA, GPIO_PIN_12);
		gpio_bit_reset(GPIOA,GPIO_PIN_8);
		/* PA11  -> KEY */
		gpio_mode_set(GPIOA, GPIO_MODE_INPUT, GPIO_PUPD_PULLUP, GPIO_PIN_11);

}


