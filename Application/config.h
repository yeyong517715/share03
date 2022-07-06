/* -----------------------------------------------------------------

* 文件名：	洛神公司40.68mhz-25w分体式设备分体式控制板之整体配置的文件*
* 时间：		2022年7月5日							    		   											*
* 编写者：	叶勇												   														*
* 版本号 	share03_config_v1.0								   		   									*
* MCU:		GD32F250C8T6	                             		  					  *

 ----------------------------------------------------------------    */

/**********************************************************************
***功能说明：
	整体配置的参数





**********************************************************************/

#ifndef __CONFIG_H
#define __CONFIG_H

typedef signed char 	int8_t;
typedef short	int		 	int16_t;
typedef	int						int32_t;

typedef	unsigned char 			uint8_t;
typedef	unsigned short int 	uint16_t;
typedef	unsigned int				uint32_t;



/* 各功能时间配置参数 */
#define RUN_LED_TIMER			0
#define ADC_WAIT_TIMER 		1
#define	KEY_WAIT_TIMER		2
#define RX0_WAIT_TIMER		3
#define	TX0_WAIT_TIMER		4

#define MS_WAIT_TIMER			9



#define RUN_LED_INIT_TIME  		400 //500ms 闪烁一次
#define ADC_WAIT_INIT_TIME		1000 //每隔1秒 adc采集一次
#define	KEY_WAIT_INIT_TIME		30	//每隔20ms 检查一次按键处理
#define	RX0_WAIT_INIT_TIME		100	//每隔100ms 处理一次接收信息
#define TX0_WAIT_INIT_TIME		1500 //每隔1.5秒 发送一次当前数据


/* 定义整个程序运行个功能时间数据 */
extern uint32_t MS_TIMER[MS_WAIT_TIMER];
extern uint8_t	MS_TIMER_MARK[MS_WAIT_TIMER];


#endif


