
/*
 * @Author: LiWenhui liwenhuiyx@yeah.net
 * @Date: 2024-08-11 17:32:50
 * @LastEditors: LiWenhui liwenhuiyx@yeah.net
 * @LastEditTime: 2024-08-19 14:00:26
 * @FilePath: /004_PWM_直流电机/User/main.c
 */
#include "Key.h"
#include "Motor.h"
#include "OLED.h"
#include "stm32f10x.h" // Device header
#include <stdint.h>

//#include "stm32f10x_gpio.h"

uint8_t KeyNumber;
int8_t Speed;

int main()
{
    // Key_Init();
    OLED_Init();
    Motor_Init();
    OLED_ShowString(1, 1, "SPEED");
    // Motor_SetSpeed(50);
    while (1)
    {
        // KeyNumber = Key_GetNum();`
        // if (KeyNumber == 1)
        // {
        //     Speed += 20;
        // }
    }
}
