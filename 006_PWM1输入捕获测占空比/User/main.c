
/*
 * @Author: LiWenhui liwenhuiyx@yeah.net
 * @Date: 2024-08-11 17:32:50
 * @LastEditors: LiWenhui liwenhuiyx@yeah.net
 * @LastEditTime: 2024-08-19 14:04:13
 * @FilePath: /006_PWM1输入捕获测占空比/User/main.c
 */

#include "IC.h"
#include "OLED.h"
#include "PWM.h"
#include "stm32f10x.h" // Device header
#include <stdint.h>

uint8_t KeyNumber;
int8_t Speed;

int main()
{
    OLED_Init();
    PWM_Init();
    IC_Init();
    OLED_ShowString(1, 1, "FREQ:00000Hz");
    OLED_ShowString(2, 1, "DUTY:00%");

    PWM_SetPrescaler(720 - 1);
    PWM_SetCompare1(32);

    while (1)
    {
        OLED_ShowNum(1, 6, IC_GetFreq(), 5);
        OLED_ShowNum(2, 6, IC_GetDuty(), 2);
    }
}
