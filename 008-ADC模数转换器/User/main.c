
/*
 * @Author: LiWenhui liwenhuiyx@yeah.net
 * @Date: 2024-08-11 17:32:50
 * @LastEditors: HuiSpec liwenhuiyx@yeah.net
 * @LastEditTime: 2024-08-20 18:40:39
 * @FilePath: /008-ADC模数转换器/User/main.c
 */
#include "AD.h"
#include "OLED.h"
#include "stm32f10x.h"
#include <stdint.h>

uint16_t value = 0;
int main()
{
    OLED_Init();
    AD_Init();
    OLED_ShowString(1, 1, "VALUE");
    OLED_ShowNum(1, 7, value, 4);
    while (1)
    {
        value = AD_GetValue();
        OLED_ShowNum(2, 7, value, 4);
    }
}