
/*
 * @Author: LiWenhui liwenhuiyx@yeah.net
 * @Date: 2024-08-11 17:32:50
 * @LastEditors: LiWenhui liwenhuiyx@yeah.net
 * @LastEditTime: 2024-08-19 13:51:44
 * @FilePath: /003_PWM_舵机/User/main.c
 */
#include "Key.h"
#include "OLED.h"
#include "Servo.h"
#include "stm32f10x.h" // Device header
#include <stdint.h>

//#include "stm32f10x_gpio.h"

uint8_t KeyNumber;
uint8_t Angle;

int main()
{
    Servo_Init();
    Key_Init();
    OLED_Init();
    OLED_ShowString(1, 1, "ANGLE");
    while (1)
    {
        // KeyNumber = Key_GetNum();
        // if (KeyNumber == 1)
        // {
        //     Angle += 30;
        //     if (Angle > 180)
        //     {
        //         Angle = 0;
        //     }
        //     Servo_SetAngle(Angle);
        // }
        // OLED_ShowNum(0, 2, Angle, 5);
    }
}
