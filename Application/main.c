/*!
    \file    main.c
    \brief   GPIO running led

    \version 2017-06-28, V1.0.0, demo for GD32F3x0
    \version 2019-06-01, V2.0.0, demo for GD32F3x0
    \version 2021-05-31, V2.1.0, demo for GD32F3x0
    \version 2022-03-06, V2.2.0, demo for GD32F3x0
*/

/*
    Copyright (c) 2022, GigaDevice Semiconductor Inc.
    Redistribution and use in source and binary forms, with or without modification, 
are permitted provided that the following conditions are met:

    1. Redistributions of source code must retain the above copyright notice, this 
       list of conditions and the following disclaimer.
    2. Redistributions in binary form must reproduce the above copyright notice, 
       this list of conditions and the following disclaimer in the documentation 
       and/or other materials provided with the distribution.
    3. Neither the name of the copyright holder nor the names of its contributors 
       may be used to endorse or promote products derived from this software without 
       specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. 
IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, 
INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT 
NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR 
PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, 
WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY 
OF SUCH DAMAGE.
*/

#include "gd32f3x0.h"
#include "gd32f350c_start.h"
#include "systick.h"
#include "led.h"
#include "config.h"
#include "gpio.h"





/* 定义整个程序运行个功能时间数据 */
uint32_t MS_TIMER[MS_WAIT_TIMER] ={0};
uint8_t	MS_TIMER_MARK[MS_WAIT_TIMER] = {0};

/*!
    \brief      main function
    \param[in]  none
    \param[out] none
    \retval     none
*/
int main(void)
{  
		uint8_t i = 1;
		share03_LED_Init();
    systick_config();
		share03_GPIO_Init();
		delay_1ms(2000);
		Speak_medium;
		delay_1ms(2000);
		SY12V_ON;
		FAN_ON;	
		MS_TIMER[RUN_LED_TIMER] = RUN_LED_INIT_TIME;
    while(1){
        if(MS_TIMER_MARK[RUN_LED_TIMER])
				{
						MS_TIMER_MARK[RUN_LED_TIMER] = 0;
						MS_TIMER[RUN_LED_TIMER] = RUN_LED_INIT_TIME;
						Run_LED_Toggle;		
						if(i%2)
						{
							LED0_R_Toggle;
							LED1_R_Toggle;
							LED2_R_Toggle;
							LED3_R_Toggle;
						}
						else
						{
							LED0_W_Toggle;
							LED1_W_Toggle;
							LED2_W_Toggle;
							LED3_W_Toggle;
						}
						i++;
				}
				
    }
}



