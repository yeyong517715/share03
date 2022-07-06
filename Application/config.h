/* -----------------------------------------------------------------

* �ļ�����	����˾40.68mhz-25w����ʽ�豸����ʽ���ư�֮�������õ��ļ�*
* ʱ�䣺		2022��7��5��							    		   											*
* ��д�ߣ�	Ҷ��												   														*
* �汾�� 	share03_config_v1.0								   		   									*
* MCU:		GD32F250C8T6	                             		  					  *

 ----------------------------------------------------------------    */

/**********************************************************************
***����˵����
	�������õĲ���





**********************************************************************/

#ifndef __CONFIG_H
#define __CONFIG_H

typedef signed char 	int8_t;
typedef short	int		 	int16_t;
typedef	int						int32_t;

typedef	unsigned char 			uint8_t;
typedef	unsigned short int 	uint16_t;
typedef	unsigned int				uint32_t;



/* ������ʱ�����ò��� */
#define RUN_LED_TIMER			0
#define ADC_WAIT_TIMER 		1
#define	KEY_WAIT_TIMER		2
#define RX0_WAIT_TIMER		3
#define	TX0_WAIT_TIMER		4

#define MS_WAIT_TIMER			9



#define RUN_LED_INIT_TIME  		400 //500ms ��˸һ��
#define ADC_WAIT_INIT_TIME		1000 //ÿ��1�� adc�ɼ�һ��
#define	KEY_WAIT_INIT_TIME		30	//ÿ��20ms ���һ�ΰ�������
#define	RX0_WAIT_INIT_TIME		100	//ÿ��100ms ����һ�ν�����Ϣ
#define TX0_WAIT_INIT_TIME		1500 //ÿ��1.5�� ����һ�ε�ǰ����


/* ���������������и�����ʱ������ */
extern uint32_t MS_TIMER[MS_WAIT_TIMER];
extern uint8_t	MS_TIMER_MARK[MS_WAIT_TIMER];


#endif


