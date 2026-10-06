/*
 * @Author: saltlu saltlu1027@gmail.com
 * @Date: 2026-10-06 12:13:14
 * @LastEditors: saltlu saltlu1027@gmail.com
 * @LastEditTime: 2026-10-06 12:22:32
 * @FilePath: \rmcode\test\Tasks\Src\led_task.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "led_task.h"
#include "main.h"


/**
  * @brief 点灯任务的初始化函数
  */
void LED_Task_Init(void)
{
    /* 
     * 作业要求：在 Tasks 的初始化里把它写成表中的电平。
     * F103 最小系统板要求：PC13 低电平，板载灯点亮。
     * 使用 HAL_GPIO_WritePin 函数，GPIO_PIN_RESET 即为低电平。
     */
    HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET);
}