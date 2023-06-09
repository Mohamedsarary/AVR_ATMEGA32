/*
 *  	Created on: 18/05/2023
 *      Driver: ADC Driver
 *      Author: Mohamed sarary
 *      File  : ADC_Config.h
 */

#include "ADC_Interface.h"

#ifndef MCAL_ADC_ADC_CONFIG_H_
#define MCAL_ADC_ADC_CONFIG_H_

/*
ADC VOLTAGE REFRERANCE OPTIONS :
	- ADC_AREF_INTERNAL_OFF   ->  To Turn Off the Internal VREF
	- ADC_5V_INTERNAL		  ->  To Turn On 5V Interal VREF
	- ADC_INTERNAL_VREF		  ->  To Turn On 2.56 Internal VREF
*/
#define ADC_VREF_MODE	ADC_5V_INTERNAL



/*
ADC WORKING OPTIONS :
	- ADC_SINGLE_MODE
	- ADC_AUTO_TRIGGER_MODE
*/
#define ADC_WORKING_MODE  ADC_SINGLE_MODE



/*
ADC CHANNEL OPTIONS :
	1- SINGLE ENDED CHANNEL :
		- ADC_ADC0_PORTA_PIN0
		- ADC_ADC1_PORTA_PIN1
		- ADC_ADC2_PORTA_PIN2
		- ADC_ADC3_PORTA_PIN3
		- ADC_ADC4_PORTA_PIN4
		- ADC_ADC5_PORTA_PIN5
		- ADC_ADC6_PORTA_PIN6
		- ADC_ADC7_PORTA_PIN7

	2- DIFFERINTIAL CHANNEL :
		- ADC_ADC0_ADC0_DIFFERNTIAL_10x
		- ADC_ADC1_ADC0_DIFFERNTIAL_10x
		- ADC_ADC0_ADC0_DIFFERNTIAL_200x
		- ADC_ADC1_ADC0_DIFFERNTIAL_200x
		- ADC_ADC2_ADC2_DIFFERNTIAL_10x
		- ADC_ADC3_ADC2_DIFFERNTIAL_10x
		- ADC_ADC2_ADC2_DIFFERNTIAL_200x
		- ADC_ADC3_ADC2_DIFFERNTIAL_200x
		- ADC_ADC0_ADC1_DIFFERNTIAL_1x
		- ADC_ADC1_ADC1_DIFFERNTIAL_1x
		- ADC_ADC2_ADC1_DIFFERNTIAL_1x
		- ADC_ADC3_ADC1_DIFFERNTIAL_1x
		- ADC_ADC4_ADC1_DIFFERNTIAL_1x
		- ADC_ADC5_ADC1_DIFFERNTIAL_1x
		- ADC_ADC6_ADC1_DIFFERNTIAL_1x
		- ADC_ADC7_ADC1_DIFFERNTIAL_1x
		- ADC_ADC0_ADC2_DIFFERNTIAL_1x
		- ADC_ADC1_ADC2_DIFFERNTIAL_1x
		- ADC_ADC2_ADC2_DIFFERNTIAL_1x
		- ADC_ADC3_ADC2_DIFFERNTIAL_1x
		- ADC_ADC4_ADC2_DIFFERNTIAL_1x
		- ADC_ADC5_ADC2_DIFFERNTIAL_1x
		- ADC_ADC6_ADC2_DIFFERNTIAL_1x
		- ADC_ADC7_ADC2_DIFFERNTIAL_1x
*/
#define ADC_CHANNEL_MODE	ADC_ADC0_PORTA_PIN0



/*
ADC PRESCALLER OPTIONS :
   - ADC_DIV_BY2
   - ADC_DIV_BY4
   - ADC_DIV_BY8
   - ADC_DIV_BY16
   - ADC_DIV_BY32
   - ADC_DIV_BY64
   - ADC_DIV_BY128
   -
*/
#define ADC_PRESCALLER_MODE		ADC_DIV_BY2



/*
ADC PRESCALLER OPTIONS :
   - ADC_RIGHT_ADJUSTMENT
   - ADC_LEFT_ADJUSTMENT
*/
#define ADC_ADJUSTMENT_MODE		ADC_LEFT_ADJUSTMENT



/*
ADC INTERRUPT OPTIONS :
   - ADC_INTERRUPT_MODEON
   - ADC_INTERRUPT_MODEOFF
*/
#define ADC_INTERRUPT_MODE		ADC_INTERRUPT_MODEOFF



/*
ADC AUTO TRIGGER OPTIONS :
   - ADC_FREE_RUNNING_MODE
   - ADC_ANALOG_COMPRATOR_MODE
   - ADC_EXT_INTERRUPT0_MODE
   - ADC_TIMER0_COMPARE_MODE
   - ADC_TIMER0_OVERFLOW_MODE
   - ADC_TIMER_COMPARE_B_MODE
   - ADC_TIMER_COMPARE_B_MODE
   - ADC_TIMER1_CAPTURE_MODE


NOTE : THIS MODE WILL WORK ONLY WHEN :  ADC_WORKING_MODE -> ADC_AUTO_TRIGGER_MODE
*/
#define ADC_AUTOTRIGGER_MODE ADC_FREE_RUNNING_MODE
#endif /* MCAL_ADC_ADC_CONFIG_H_ */
