/*
 * @Author: LiWenhui liwenhuiyx@yeah.net
 * @Date: 2024-08-15 17:58:11
 * @LastEditors: LiWenhui liwenhuiyx@yeah.net
 * @LastEditTime: 2024-08-18 19:47:14
 * @FilePath: /007_正交编码器测速/Code/Inc/PWM.h
 *
 */
#ifndef __PWM_H
#define __PWM_H

#include <stdint.h>
void PWM_Init();
void PWM_SetCompare1(uint16_t Compare);
void PWM_SetPrescaler(uint16_t Prescaler);
#endif
