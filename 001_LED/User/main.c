
/*
 * @Author: LiWenhui liwenhuiyx@yeah.net
 * @Date: 2024-08-11 17:32:50
 * @LastEditors: LiWenhui liwenhuiyx@yeah.net
 * @LastEditTime: 2024-08-19 13:46:02
 * @FilePath: /001_LED/User/main.c
 */

#include "OLED.h"
#include "Timer.h"
#include "stm32f10x.h" // Device header
#include <stdint.h>

//#include "stm32f10x_gpio.h"
#define SIZE 2
uint16_t number1; //定义待被旋转编码器调节的变量
uint16_t number2;
int main()
{
    OLED_Init();
    OLED_ShowNum(1, 2, 234, 3);

    while (1)
    {
        // number2 = Timer_getCounter();
        // OLED_ShowNum(1, 2, number1 * 2, 4);
        // OLED_ShowNum(1, 2, number2 * 2, 4);
    }
}

void TIM2_IRQHandler()
{
    if (TIM_GetITStatus(TIM2, TIM_IT_Update) == SET)
    {
        number1++;
        TIM_ClearITPendingBit(TIM2, TIM_IT_Update);
    }
}