/*
 * @Author: LiWenhui liwenhuiyx@yeah.net
 * @Date: 2024-08-15 16:32:07
 * @LastEditors: LiWenhui liwenhuiyx@yeah.net
 * @LastEditTime: 2024-08-15 17:21:26
 * @FilePath: /001_LED/Code/Src/Timer.c
 * 
 */
#include "stm32f10x.h"
#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"
#include "stm32f10x_tim.h"
#include <stdint.h>



void TIMER2_Init()
{
    RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2, ENABLE);
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);

    GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_InitStructure.GPIO_Mode =GPIO_Mode_IPU ;
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA, &GPIO_InitStructure);


    
    //TIM_InternalClockConfig(TIM2);
    TIM_ETRClockMode2Config(TIM2,TIM_ExtTRGPSC_OFF,TIM_ExtTRGPolarity_NonInverted,0x00);
    TIM_TimeBaseInitTypeDef TIM_TimeBaseInitStructure;
    TIM_TimeBaseInitStructure.TIM_ClockDivision = TIM_CKD_DIV1;
    TIM_TimeBaseInitStructure.TIM_CounterMode = TIM_CounterMode_Up;
    TIM_TimeBaseInitStructure.TIM_RepetitionCounter = 0;
    TIM_TimeBaseInitStructure.TIM_Period = 10-1;
    TIM_TimeBaseInitStructure.TIM_Prescaler = 1;
    TIM_TimeBaseInit(TIM2, &TIM_TimeBaseInitStructure);


    TIM_ITConfig(TIM2, TIM_IT_Update, ENABLE);
    TIM_ClearFlag(TIM2, TIM_FLAG_Update);
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);

    NVIC_InitTypeDef NVIC_InitStructure;
    NVIC_InitStructure.NVIC_IRQChannel = TIM2_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelCmd = 2;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = ENABLE;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 1;

    NVIC_Init(&NVIC_InitStructure);

    TIM_Cmd(TIM2, ENABLE);
}


uint16_t Timer_getCounter(void)
{
    return TIM_GetCounter(TIM2);
}
// void TIM2_IRQHandler()
// {
//     if(TIM_GetITStatus(TIM2, TIM_IT_Update) == SET)
//     {
//         number++;
//         TIM_ClearITPendingBit(TIM2, TIM_IT_Update);
//     }
// }