
/*
 * @Author: LiWenhui liwenhuiyx@yeah.net
 * @Date: 2024-08-11 17:32:50
 * @LastEditors: LiWenhui liwenhuiyx@yeah.net
 * @LastEditTime: 2024-08-18 20:19:02
 * @FilePath: /007_正交编码器测速/User/main.c
 */

#include "Delay.h"
#include "OLED.h"
#include "Runcoder.h"
#include "stm32f10x.h"
#include <stdint.h>

int16_t Number;
int main()
{
    OLED_Init();
    Runcoder_Init();
    OLED_ShowString(1, 1, "NUMBER:");
    while (1)
    {
        Number = Get_RunCoder();
        OLED_ShowSignedNum(1, 8, Number, 5);
        Delay_s(1);
    }
}
