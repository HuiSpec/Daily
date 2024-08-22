/*
 * @Author: HuiSpec liwenhuiyx@yeah.net
 * @Date: 2024-08-22 16:13:36
 * @LastEditors: HuiSpec liwenhuiyx@yeah.net
 * @LastEditTime: 2024-08-22 16:23:45
 * @FilePath: /009-ADC模数转换器多通道/Code/Inc/AD.h
 *
 */
#ifndef __AD_H
#define __AD_H

#include <stdint.h>
void AD_Init();
uint16_t AD_GetValue(uint8_t ADC_Channel);

#endif