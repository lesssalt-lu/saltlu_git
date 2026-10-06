#include "main.h"
#include "timer_task.h"  

/* 声明外部的定时器和看门狗句柄 */
extern TIM_HandleTypeDef htim2;
extern IWDG_HandleTypeDef hiwdg;

/* 全局变量，用于 Ozone 观测 */
volatile uint32_t tick = 0;

void Timer_Task_Init(void)
{
    // 以中断模式启动定时器 2
    HAL_TIM_Base_Start_IT(&htim2);
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
    // 检查是否是 TIM2 触发的中断
    if (htim->Instance == TIM2)
    {
        tick++;                     // 全局变量自增 1
        //HAL_IWDG_Refresh(&hiwdg);   // 实验二必须保留这一句来喂狗，否则 tick 无法一直增加;注释后为去掉喂狗操作，进行实验三
    }
}