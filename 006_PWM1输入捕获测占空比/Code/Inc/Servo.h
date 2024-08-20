/*
 * @Author: LiWenhui liwenhuiyx@yeah.net
 * @Date: 2024-08-16 13:31:20
 * @LastEditors: LiWenhui liwenhuiyx@yeah.net
 * @LastEditTime: 2024-08-16 13:35:31
 * @FilePath: /003_PWM_舵机/Code/Inc/Servo.h
 * 
 */
#ifndef __SERVO_H
#define __SERVO_H

#include <stdint.h>


void Servo_Init();
void Servo_SetAngle(float Angle);

#endif