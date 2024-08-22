
/*
 * @Author: LiWenhui liwenhuiyx@yeah.net
 * @Date: 2024-08-11 17:32:50
 * @LastEditors: HuiSpec liwenhuiyx@yeah.net
 * @LastEditTime: 2024-08-22 16:09:01
 * @FilePath: /008-ADC模数转换器/User/main.c
 */
#include "AD.h"
#include "Delay.h"
#include "OLED.h"
#include "stm32f10x.h"
#include <stdint.h>


uint16_t value = 0;
float Voltage;
int main()
{
    OLED_Init();
    AD_Init();
    OLED_ShowString(1, 1, "VALUE:");
    OLED_ShowString(1, 12, "0.00V");
    while (1)
    {
        value   = AD_GetValue();
        Voltage = (float)value * (3.3 / 4095);
        OLED_ShowNum(1, 7, value, 4);
        OLED_ShowNum(1, 12, Voltage, 1);
        OLED_ShowNum(1, 14, (uint16_t)(Voltage * 1000) % 1000, 3);
        Delay_ms(100);
    }
}