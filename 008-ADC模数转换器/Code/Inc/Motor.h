/*
 * @Author: LiWenhui liwenhuiyx@yeah.net
 * @Date: 2024-08-16 14:08:17
 * @LastEditors: LiWenhui liwenhuiyx@yeah.net
 * @LastEditTime: 2024-08-16 14:30:33
 * @FilePath: /003_PWM_直流电机/Code/Inc/Motor.h
 * 
 */
#ifndef __MOTOR_H
#define __MOTOR_H

#include <stdint.h>

void Motor_Init();

void Motor_SetSpeed(int8_t Speed);

#endif