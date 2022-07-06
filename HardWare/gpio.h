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

#ifndef __GPIO_H
#define __GPIO_H
#include <gd32f3x0_gpio.h>
#include "systick.h"


/* 配置各种IO */
/* 蜂鸣器的开和关 */
#define SPEAK_ON 			gpio_bit_reset(GPIOB, GPIO_PIN_10)
#define SPEAK_OFF			gpio_bit_set(GPIOB, GPIO_PIN_10)
#define	Speak_shrot		SPEAK_ON;delay_1ms(50);	SPEAK_OFF;delay_1ms(50);
#define	Speak_medium	SPEAK_ON;delay_1ms(100);SPEAK_OFF;delay_1ms(50);
#define	Speak_long		SPEAK_ON;delay_1ms(150);SPEAK_OFF;delay_1ms(50);

/* 风扇的开和关 */
#define FAN_ON 			gpio_bit_reset(GPIOB, GPIO_PIN_11)
#define FAN_OFF			gpio_bit_set(GPIOB, GPIO_PIN_11)	

/* 给RF板的7.4V的开和关 */
#define	RF74V_ON		gpio_bit_reset(GPIOB,GPIO_PIN_15)
#define	RF74V_OFF		gpio_bit_set(GPIOB,GPIO_PIN_15)

/* 升压模块的开和关 */
#define	SY12V_ON		gpio_bit_set(GPIOA,GPIO_PIN_8)
#define	SY12V_OFF		gpio_bit_reset(GPIOA,GPIO_PIN_8)

/* RF_OUT 的开和关 */
#define	RF_OUT_ON		gpio_bit_reset(GPIOA,GPIO_PIN_12)
#define	RF_OUT_OFF	gpio_bit_set(GPIOA,GPIO_PIN_12)

/* key 的宏定义 */
#define	KEY					gpio_input_bit_get(GPIOA, GPIO_PIN_11)

/* 函数申明 */
void share03_GPIO_Init(void);

#endif

