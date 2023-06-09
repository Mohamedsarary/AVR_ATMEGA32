/*
 *  	Created on: 18/05/2023
 *      Driver: ADC Driver
 *      Author: Mohamed sarary
 *      File  : ADC_Interface.h
 */

#include "../../SERVICES/STD_TYPES.h"

#ifndef MCAL_ADC_ADC_INTERFACE_H_
#define MCAL_ADC_ADC_INTERFACE_H_

#define ADC_AREF_INTERNAL_OFF 	         0
#define ADC_5V_INTERNAL	   	         	 1
#define ADC_REVERSED 		  	 	   	 2
#define ADC_INTERNAL_VREF	  			 3


#define ADC_RIGHT_ADJUSTMENT    		 1
#define ADC_LEFT_ADJUSTMENT  			 1

/*   	 ADC SINGLE ENDED MODES 		*/

#define ADC_ADC0_PORTA_PIN0				 0
#define ADC_ADC1_PORTA_PIN1				 1
#define ADC_ADC2_PORTA_PIN2				 2
#define ADC_ADC3_PORTA_PIN3				 3
#define ADC_ADC4_PORTA_PIN4				 4
#define ADC_ADC5_PORTA_PIN5				 5
#define ADC_ADC6_PORTA_PIN6				 6
#define ADC_ADC7_PORTA_PIN7				 7

/*   	 ADC DIFFERENTIAL MODES 		*/

#define ADC_ADC0_ADC0_DIFFERNTIAL_10x	 8
#define ADC_ADC1_ADC0_DIFFERNTIAL_10x	 9
#define ADC_ADC0_ADC0_DIFFERNTIAL_200x	 10
#define ADC_ADC1_ADC0_DIFFERNTIAL_200x	 11
#define ADC_ADC2_ADC2_DIFFERNTIAL_10x	 12
#define ADC_ADC3_ADC2_DIFFERNTIAL_10x	 13
#define ADC_ADC2_ADC2_DIFFERNTIAL_200x	 12
#define ADC_ADC3_ADC2_DIFFERNTIAL_200x	 13
#define ADC_ADC0_ADC1_DIFFERNTIAL_1x	 14
#define ADC_ADC1_ADC1_DIFFERNTIAL_1x	 15
#define ADC_ADC2_ADC1_DIFFERNTIAL_1x	 16
#define ADC_ADC3_ADC1_DIFFERNTIAL_1x	 17
#define ADC_ADC4_ADC1_DIFFERNTIAL_1x	 18
#define ADC_ADC5_ADC1_DIFFERNTIAL_1x	 19
#define ADC_ADC6_ADC1_DIFFERNTIAL_1x	 20
#define ADC_ADC7_ADC1_DIFFERNTIAL_1x	 21
#define ADC_ADC0_ADC2_DIFFERNTIAL_1x	 22
#define ADC_ADC1_ADC2_DIFFERNTIAL_1x	 23
#define ADC_ADC2_ADC2_DIFFERNTIAL_1x	 24
#define ADC_ADC3_ADC2_DIFFERNTIAL_1x	 25
#define ADC_ADC4_ADC2_DIFFERNTIAL_1x	 26
#define ADC_ADC5_ADC2_DIFFERNTIAL_1x	 27

#define ADC_DIV_BY2						 1
#define ADC_DIV_BY4						 2
#define ADC_DIV_BY8						 3
#define ADC_DIV_BY16					 4
#define ADC_DIV_BY32					 5
#define ADC_DIV_BY64					 6
#define ADC_DIV_BY128					 7

#define ADC_SINGLE_MODE					 0
#define ADC_AUTO_TRIGGER_MODE			 1

#define ADC_INTERRUPT_MODEON			 0
#define ADC_INTERRUPT_MODEOFF			 1


#define ADC_FREE_RUNNING_MODE			 0
#define ADC_ANALOG_COMPRATOR_MODE	   	 1
#define ADC_EXT_INTERRUPT0_MODE			 2
#define ADC_TIMER0_COMPARE_MODE			 3
#define ADC_TIMER0_OVERFLOW_MODE	 	 4
#define ADC_TIMER_COMPARE_B_MODE		 5
#define ADC_TIMER1_OVERFLOW_MODE		 6
#define ADC_TIMER1_CAPTURE_MODE			 7

u8 ADC_u8Init(void);
u8 ADC_u8Enable(void);
u8 ADC_u8Disable(void);
u16 ADC_u16GetResult(u16* Copy_u16_ADC_Res);
u16 ADC_u16GETChannelResult(u8 Copy_u8ADC_Channel , u8* Copy_u8ADC_ChannelRes  );



#endif /* MCAL_ADC_ADC_INTERFACE_H_ */
