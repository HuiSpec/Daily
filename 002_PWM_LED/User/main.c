
/*
 * @Author: LiWenhui liwenhuiyx@yeah.net
 * @Date: 2024-08-11 17:32:50
 * @LastEditors: LiWenhui liwenhuiyx@yeah.net
 * @LastEditTime: 2024-08-19 13:49:33
 * @FilePath: /002_PWM_LED/User/main.c
 */
#include "Delay.h"
#include "PWM.h"
#include "stm32f10x.h" // Device header
#include <stdint.h>

//#include "stm32f10x_gpio.h"

int main()
{
    PWM_Init();
    while (1)
    {
        for (int i = 0; i <= 100; i++)
        {
            PWM_SetCompare1(i);
            Delay_ms(10);
        }
        // Delay_s(1);
        for (int i = 0; i <= 100; i++)
        {
            PWM_SetCompare1(100 - i);
            Delay_ms(10);
        }
    }
}
