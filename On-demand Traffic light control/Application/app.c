/*
 * app.c
 *
 * Created: 9/14/2022 3:11:40 AM
 *  Author: lenovo
 */ 
#include "app.h"
void startApp(void)
{
	uint8_T i=0;
	LED_Init('b',0);//pedestrian
	LED_Init('b',1);//pedestrian
	LED_Init('b',2);//pedestrian
	LED_Init('a',0);//car
	LED_Init('a',1);//car
	LED_Init('a',2);//car
	ButtonInit('d',2);
	SET_BIT(SREG,7);//enable interrupt
	SET_BIT(GICR,6);//enable INT0 interrupt
	SET_BIT(MCUCR,1);//let interrupt be done when rising edge enter the pin
	SET_BIT(MCUCR,0);//let interrupt be done when rising edge enter the pin

	while (1)
	{
		/************************************************************************/
		/*                          NORMAL MODE                                 */
		/************************************************************************/
		for (i=0;i<=2;i++)
		{
			if (i==1)
			{
				//LED_Toggle('a',i);
				TOG_BIT(PORTA,i);
				delay_ms(5000);
				LED_TurnOff('a',i);
			}
			else
			{
				LED_TurnOn('a',i);
				delay_ms(5000);
				LED_TurnOff('a',i);
			}
			
		}
		for (i=1;i>=0;i--)
		{
			if (i==1)
			{
				LED_Toggle('a',i);
				//toggPin('a',i);
				delay_ms(5000);
				LED_TurnOff('a',i);
			}
			else
			{
				LED_TurnOn('a',i);
				delay_ms(5000);
				LED_TurnOff('a',i);
			}
		}
		
	}
}
ISR(INT0_vect)
{
	if (readPin('a',0)==HIGH)
	{
		LED_TurnOff('a',0);
		LED_TurnOff('a',1);
		LED_TurnOff('a',2);
		LED_TurnOn('a',1);//yellow car
		LED_TurnOn('b',1);//yellow pedestrian
		delay_ms(5000);
		LED_TurnOff('a',1);
		LED_TurnOff('b',1);
		LED_TurnOn('a',2);
		LED_TurnOn('b',0);
		delay_ms(5000);
		LED_TurnOff('a',2);
		LED_TurnOff('b',0);
	}
	else if(readPin('a',1)==HIGH)
	{
		LED_TurnOff('a',0);
		LED_TurnOff('a',2);
		LED_TurnOn('b',1);
		delay_ms(5000);
		LED_TurnOff('a',1);
		LED_TurnOff('b',1);
		LED_TurnOn('a',2);
		LED_TurnOn('b',0);
		delay_ms(5000);
		LED_TurnOff('a',2);
		LED_TurnOff('b',0);
	}
	else if (readPin('a',2)==HIGH)
	{
		LED_TurnOff('a',0);
		LED_TurnOff('a',1);
	//	LED_TurnOff('a',2);
		LED_TurnOn('a',2);
		delay_ms(5000);
		//LED_TurnOff('a',2);
		LED_TurnOn('a',2);
		LED_TurnOn('b',0);
		delay_ms(5000);
		LED_TurnOff('b',0);
		LED_TurnOff('a',2);
	}
}