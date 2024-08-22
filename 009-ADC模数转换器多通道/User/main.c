
/*
 * @Author: LiWenhui liwenhuiyx@yeah.net
 * @Date: 2024-08-11 17:32:50
 * @LastEditors: HuiSpec liwenhuiyx@yeah.net
 * @LastEditTime: 2024-08-22 16:30:20
 * @FilePath: /009-ADC模数转换器多通道/User/main.c
 */
#include "AD.h"
#include "Delay.h"
#include "OLED.h"
#include "stm32f10x.h"
#include "stm32f10x_adc.h"
#include <stdint.h>

uint16_t AD1, AD2, AD3;
float Voltage;
int main()
{
    OLED_Init();
    AD_Init();
    OLED_ShowString(1, 1, "AD1:");
    OLED_ShowString(2, 1, "AD2:");
    OLED_ShowString(3, 1, "AD3:");
    // OLED_ShowString(1, 12, "0.00V");
    while (1)
    {
        AD1 = AD_GetValue(ADC_Channel_0);
        AD2 = AD_GetValue(ADC_Channel_1);
        AD3 = AD_GetValue(ADC_Channel_2);
        OLED_ShowNum(1, 5, AD1, 5);
        OLED_ShowNum(2, 5, AD2, 5);
        OLED_ShowNum(3, 5, AD3, 5);
        // Delay_ms(100);
    }
}