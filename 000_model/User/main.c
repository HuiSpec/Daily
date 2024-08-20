/*
 * @Author: LiWenhui liwenhuiyx@yeah.net
 * @Date: 2024-08-11 17:32:50
 * @LastEditors: LiWenhui liwenhuiyx@yeah.net
 * @LastEditTime: 2024-08-19 13:36:11
 * @FilePath: /000_model/User/main.c
 *
 */

#include "Delay.h"
#include "LED.h"
#include "OLED.h"
#include "stm32f10x.h" // Device header
//#include "stm32f10x_gpio.h"

// volatile int16_t number-shu-chu; //定义待被旋转编码器调节的变量

uint8_t i;
uint32_t Num      = 0;
int32_t SignedNum = 0;
int main(void)
{

    OLED_Init();
    OLED_ShowNum(0, 0, 9, 1);
    OLED_ShowNum(0, 1, 9, 1);
    // OLED_ShowNum(2, 2, 9, 2);
    // OLED_ShowNum(3, 3, 9, 2);
    // OLED_ShowNum(4, 4, 9, 2);
    // OLED_ShowNum(5, 5, 9, 2);
    // OLED_ShowNum(6, 6, 9, 2);

    while (1)
    {
        // LED1_Turn();
        // Delay_ms(100);
    }
}
