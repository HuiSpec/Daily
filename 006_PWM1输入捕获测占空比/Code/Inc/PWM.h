/*
 * @Author: LiWenhui liwenhuiyx@yeah.net
 * @Date: 2024-08-15 17:58:11
 * @LastEditors: LiWenhui liwenhuiyx@yeah.net
 * @LastEditTime: 2024-08-18 17:15:09
 * @FilePath: /005_输入捕获/Code/Inc/PWM.h
 *
 */
#ifndef __PWM_H
#define __PWM_H

#include <stdint.h>
void PWM_Init();
void PWM_SetCompare1(uint16_t Compare);
void PWM_SetCompare2(uint16_t Compare);
void PWM_SetCompare3(uint16_t Compare);
void PWM_SetPrescaler(uint16_t Prescaler);
#endif