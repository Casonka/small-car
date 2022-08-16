/*!
    *   --------------------------------------------------------------------------
    *                       ///RCR Maximum Configuration Kit\\
    *   --------------------------------------------------------------------------
    *   @file MaxKit.h
    *   @note [RCR] Setup pins, interfaces
    *   @author RCR group developers - Caska
    *   @date   16/08/2022 - last update
    *
*/
#pragma once

#include "FilConfig.h"

/*!
*   @note [RCR] This settings transport to FIL Driver
*/
#define __configUSE_RCC                 (0)
#define __configUSE_GPIO                (0)
#define __configUSE_TIM                 (0)
#define __configUSE_USART               (0)
#define __configUSE_DMA                 (0)
#define __configUSE_I2C                 (0)
#define __configUSE_ADC                 (0)
#define __configUSE_EXTI                (0)
#define __configUSE_RTC                 (0)
#define __configUSE_FREERTOS            (0)

#define __configCALC_RCC                (0)
#define __configCALC_TIM                (0)
#define __configCALC_USART              (0)
#define __configCALC_Regulators         (0)
#define __configCALC_Matrix             (0)

#define __config_SysTick_Counter        (0)

/*!
*   @list Timer Sector
*/
#define OFF         (0x00)       //Not used
#define PID         (0xAD)       //Interrupt for calculating
#define PWM         (0xAE)       //PWM output compare
#define ENCODER     (0xAF)       //Encoder mode
#define PULSE       (0xB0)       //One pulse mode
#define InputPWM    (0x01)       //PWM input capture
#define PWM_Central (0x02)       //Central PWM aligned mode

#define __config_TIM1_TYPE              (OFF)
#define __config_TIM1_PSC               (0)
#define __config_TIM1_ARR               (0)
#define __config_TIM1_CH1               (0)
#define __config_TIM1_CH2               (0)
#define __config_TIM1_CH3               (0)
#define __config_TIM1_CH4               (0)

#define __config_TIM2_TYPE              (OFF)
#define __config_TIM2_PSC               (0)
#define __config_TIM2_ARR               (0)
#define __config_TIM2_CH1               (0)
#define __config_TIM2_CH2               (0)
#define __config_TIM2_CH3               (0)
#define __config_TIM2_CH4               (0)

#define __config_TIM3_TYPE              (OFF)
#define __config_TIM3_PSC               (0)
#define __config_TIM3_ARR               (0)
#define __config_TIM3_CH1               (0)
#define __config_TIM3_CH2               (0)
#define __config_TIM3_CH3               (0)
#define __config_TIM3_CH4               (0)

#define __config_TIM4_TYPE              (OFF)
#define __config_TIM4_PSC               (0)
#define __config_TIM4_ARR               (0)
#define __config_TIM4_CH1               (0)
#define __config_TIM4_CH2               (0)
#define __config_TIM4_CH3               (0)
#define __config_TIM4_CH4               (0)

#define __config_TIM5_TYPE              (OFF)
#define __config_TIM5_PSC               (0)
#define __config_TIM5_ARR               (0)
#define __config_TIM5_CH1               (0)
#define __config_TIM5_CH2               (0)
#define __config_TIM5_CH3               (0)
#define __config_TIM5_CH4               (0)

#define __config_TIM6_TYPE              (OFF)
#define __config_TIM6_PSC               (0)
#define __config_TIM6_ARR               (0)
#define __config_TIM6_CH1               (0)
#define __config_TIM6_CH2               (0)
#define __config_TIM6_CH3               (0)
#define __config_TIM6_CH4               (0)

#define __config_TIM7_TYPE              (OFF)
#define __config_TIM7_PSC               (0)
#define __config_TIM7_ARR               (0)
#define __config_TIM7_CH1               (0)
#define __config_TIM7_CH2               (0)
#define __config_TIM7_CH3               (0)
#define __config_TIM7_CH4               (0)

#define __config_TIM7_TYPE              (OFF)
#define __config_TIM7_PSC               (0)
#define __config_TIM7_ARR               (0)
#define __config_TIM7_CH1               (0)
#define __config_TIM7_CH2               (0)
#define __config_TIM7_CH3               (0)
#define __config_TIM7_CH4               (0)

#define __config_TIM8_TYPE              (OFF)
#define __config_TIM8_PSC               (0)
#define __config_TIM8_ARR               (0)
#define __config_TIM8_CH1               (0)
#define __config_TIM8_CH2               (0)
#define __config_TIM8_CH3               (0)
#define __config_TIM8_CH4               (0)

#define __config_TIM9_TYPE              (OFF)
#define __config_TIM9_PSC               (0)
#define __config_TIM9_ARR               (0)
#define __config_TIM9_CH1               (0)
#define __config_TIM9_CH2               (0)
#define __config_TIM9_CH3               (0)
#define __config_TIM9_CH4               (0)

#define __config_TIM10_TYPE              (OFF)
#define __config_TIM10_PSC               (0)
#define __config_TIM10_ARR               (0)
#define __config_TIM10_CH1               (0)
#define __config_TIM10_CH2               (0)
#define __config_TIM10_CH3               (0)
#define __config_TIM10_CH4               (0)

#define __config_TIM11_TYPE              (OFF)
#define __config_TIM11_PSC               (0)
#define __config_TIM11_ARR               (0)
#define __config_TIM11_CH1               (0)
#define __config_TIM11_CH2               (0)
#define __config_TIM11_CH3               (0)
#define __config_TIM11_CH4               (0)

#define __config_TIM12_TYPE              (OFF)
#define __config_TIM12_PSC               (0)
#define __config_TIM12_ARR               (0)
#define __config_TIM12_CH1               (0)
#define __config_TIM12_CH2               (0)
#define __config_TIM12_CH3               (0)
#define __config_TIM12_CH4               (0)

#define __config_TIM13_TYPE              (OFF)
#define __config_TIM13_PSC               (0)
#define __config_TIM13_ARR               (0)
#define __config_TIM13_CH1               (0)
#define __config_TIM13_CH2               (0)
#define __config_TIM13_CH3               (0)
#define __config_TIM13_CH4               (0)

#define __config_TIM14_TYPE              (OFF)
#define __config_TIM14_PSC               (0)
#define __config_TIM14_ARR               (0)
#define __config_TIM14_CH1               (0)
#define __config_TIM14_CH2               (0)
#define __config_TIM14_CH3               (0)
#define __config_TIM14_CH4               (0)

#define MAX_PWM                         (0)
#define MAX_PWM_SERVO                   (0)

#define __config_Regulator_ON           (0)
#define __config_Regulator_Source       (0)
#define __config_Regulator_FREQ         (100)
#define __config_Regulator_P_K          (5.0)
#define __config_Regulator_I_K          (1.5)
#define __config_Regulator_D_K          (0.5)
#define __config_MAX_SUM_ERROR          (6.0)
#define __config_OUTPUT_END             (50.0)
#define __config_Regulator_ERROR_END    (0.0)
#define __config_MAX_OUTPUT             (1.0)
#define __config_MIN_OUTPUT             (0.08)

#define PI2                             (6.28314)
#define REDUCTION_ENGINE                (150)
#define REDUCTION_DIFF                  (1.2)
#define REDUCTION_SUM                   (REDUCTION_ENGINE + REDUCTION_DIFF)
#define R_WHEEL                         (0.048)
#define WHEEL_LENGTH                    (PI2 * R_WHEEL)
#define DISKETS_ON_ROTATE               (41000.0)
#define COMPENSATE_VALUE                (0.9)
#define DISK_TO_REAL                    ((float)(WHEEL_LENGTH / DISKETS_ON_ROTATE * COMPENSATE_VALUE))
#define TIME                            ((float)(1.0 / __config_Regulator_FREQ))

#define __config_USART1_Baudrate        (0)
#define __config_USART6_Baudrate        (0)

#define __configUSE_ModBus              (0)
#define __configMODBUS_Type             (0)
#if(__configUSE_ModBus == 1)
    #include "ModBus_conf.h"
    #include "ModBus.h"
#endif /*__configUSE_ModBus*/

#define __configADC_Mode                (0)
#define __configCONVERT_Volts           (0)
#define __configUSE_Battery_Charging    (0)
#define __configUSE_Temperature_Sensor  (0)

#define __configUSE_SENSOR_1            (-1)
#define __configUSE_SENSOR_2            (-1)
#define __configUSE_SENSOR_3            (-1)
#define __configUSE_SENSOR_4            (-1)
#define __configUSE_SENSOR_5            (-1)
#define __configUSE_SENSOR_6            (-1)
#define __configUSE_SENSOR_7            (-1)
#define __configUSE_SENSOR_8            (-1)
#define __configUSE_SENSOR_9            (-1)
#define __configUSE_SENSOR_10           (-1)

#define __configADC_InterruptRequest    (0)
/*!
*   @info Supported divider ADC frequency
*       @note [RCR] ADC Freq = APB2 Clock (exmp. 84 MHz) / divider
*       @arg 0 - divided by 2
*       @arg 1 - divided by 4
*       @arg 2 - divided by 6
*       @arg 3 - divided by 8
*/
#define __configADC_Divider              (0)
/*!
*   @info Supported resolution ADC data
*       @arg 12[bit]
*       @arg 10[bit]
*       @arg 8[bit]
*       @arg 6[bit]
*/
#define __configADC_RESOLUTION          (0)
/*!
*   @info Supported cycles mode ADC
*       @arg 480[cycles]
*       @arg 144[cycles]
*       @arg 112[cycles]
*       @arg 84[cycles]
*       @arg 56[cycles]
*       @arg 28[cycles]
*       @arg 15[cycles]
*       @arg 3[cycles]
*/
#define __configADC_CYCLES              (ADC_480_CYCLES)

#define __configCALC_I2C_SCANNING       (1)
#define __configI2C_FindListSize        (5)
#define __configI2C_TIMEOUT             (20000)

#define __configI2C_LCD_SOURCE          (I2C1)
#define __configUSE_LVGL                (0)
#define SSD1306_ADDR                    (0x78)

#define __configI2C_MPU_SOURCE          (I2C1)
#define __configMPU_USE_Calibration     (1)
#define __configMPU_Scale               (0)
#define __configIS_AD0                  (0)
#define MPU9250_ADDR                    (__configIS_AD0 == 1) ? (0x69)  : (0x68)

//-----------------------------------------------------------------//
/*!
*   @brief General Initialization
*/
#define Board_Config       {\
    SetPWR;                 \
    SetGPIOA;               \
    SetGPIOB;               \
    SetGPIOC;               \
    SetTIM1;                \
    SetTIM3;                \
    SetTIM4;                \
    SetTIM5;                \
    SetDMA2;                \
    SetADC1;                \
    SetUSART1;              \
    SetUSART6;              \
    SetSYSCFG;              \
    InitPeriph;             \
    InitTimers;             \
    InitUSART;              \
    InitInterrupts;         \
    SysTick_Config(__config_SysTick_Counter);\
    SetI2C1;                }

/*!
*   @brief Initialization pins
*/
#define InitPeriph {\
    conf_pin(BTN1_DIR_PIN, GENERAL, PUSH_PULL, FAST_S, NO_PULL_UP);\
    conf_pin(MULPLXA_PIN,  GENERAL, PUSH_PULL, FAST_S, PULL_DOWN);\
    conf_pin(MULPLXB_PIN,  GENERAL, PUSH_PULL, FAST_S, PULL_DOWN);\
    conf_pin(MULPLXC_PIN,  GENERAL, PUSH_PULL, FAST_S, PULL_DOWN);\
    conf_pin(INT_PIN,  GENERAL, PUSH_PULL, FAST_S, PULL_DOWN);\
    conf_pin(LED_PIN,  GENERAL, PUSH_PULL, FAST_S, NO_PULL_UP);\
    conf_pin(ADC_TOP, ANALOG, PUSH_PULL, FAST_S, NO_PULL_UP);\
    conf_pin(POT_PIN, ANALOG, PUSH_PULL, FAST_S, PULL_DOWN);\
    conf_pin(EXTI1_PIN, INPUT, PUSH_PULL, FAST_S, PULL_DOWN);\
    conf_pin(EXTI2_PIN, INPUT, PUSH_PULL, FAST_S, PULL_DOWN);\
    conf_pin(EXTI3_PIN, INPUT, PUSH_PULL, FAST_S, PULL_DOWN);\
    conf_pin(EXTI4_PIN, INPUT, PUSH_PULL, FAST_S, PULL_DOWN);\
    conf_pin(EXTI5_PIN, INPUT, PUSH_PULL, FAST_S, PULL_DOWN);\
    conf_pin(BTN1_PWM_PIN, ALTERNATE, PUSH_PULL, FAST_S, NO_PULL_UP);\
    conf_af(BTN1_PWM_PIN, AF1);\
    conf_pin(BTN2_PWM_PIN, ALTERNATE, PUSH_PULL, FAST_S, NO_PULL_UP);\
    conf_af(BTN2_PWM_PIN, AF1);\
    conf_pin(ENCODER1A_PIN, ALTERNATE, PUSH_PULL, FAST_S, NO_PULL_UP);\
    conf_af(ENCODER1A_PIN, AF2);\
    conf_pin(ENCODER1B_PIN, ALTERNATE, PUSH_PULL, FAST_S, NO_PULL_UP);\
    conf_af(ENCODER1B_PIN, AF2);\
    conf_pin(ENCODER2A_PIN, ALTERNATE, PUSH_PULL, LOW_S, PULL_UP);\
    conf_af(ENCODER2A_PIN, AF2);\
    conf_pin(ENCODER2B_PIN, ALTERNATE, PUSH_PULL, LOW_S, PULL_UP);\
    conf_af(ENCODER2B_PIN, AF2);\
    conf_pin(I2C_SDA_PIN, ALTERNATE, OPEN_DRAIN, FAST_S, NO_PULL_UP);\
    conf_af(I2C_SDA_PIN, AF4);\
    conf_pin(I2C_SCL_PIN, ALTERNATE, OPEN_DRAIN, FAST_S, NO_PULL_UP);\
    conf_af(I2C_SCL_PIN, AF4);}

/*!
*   @brief Initialization timers
*       @arg TIM1 - Wheels engine
*       @arg TIM2 - Servo management
*       @arg TIM3 - PID Calculating (Interrupt)
*           @attention check interrupts file for TIM
*               @file TIM.c
*       @arg TIM4 - Encoder monitoring
*/
#define InitTimers                                                                                                                     {\
    TimPWMConfigure(TIM1,__config_TIM1_PSC,__config_TIM1_ARR,__config_TIM1_CH1,__config_TIM1_CH2,__config_TIM1_CH3,__config_TIM1_CH4);  \
    TimPWMConfigure(TIM5,__config_TIM5_PSC,__config_TIM5_ARR,__config_TIM5_CH1,__config_TIM5_CH2,__config_TIM5_CH3,__config_TIM5_CH4);  \
    TimEncoderConfigure(TIM4);                                                                                                          \
    TimPIDConfigureAutomatic(__config_Regulator_Source,__config_Regulator_FREQ);                                                        }

/*!
*   @brief Initialization interrupts
*/
#define InitInterrupts {\
    NVIC_EnableIRQ(TIM3_IRQn);\
    NVIC_EnableIRQ(ADC_IRQn);}

/*!
*   @brief Initialization uart/usart
*/
#define InitUSART {\
    USARTBothConfigure(USART1,__config_USART1_Baudrate, 0, 0); \
    USARTTransmitterConfigure(USART6, __config_USART6_Baudrate, 0);}

/*!
*   @brief Initialization servomotors
*/
#define InitServo   setServo(&Servo1, BIG_BLACK_SERVA, 20, 0x500, 0x100, 20)

#endif /*STM32F401xx*/

