/*
 * Led.h
 *
 * Created: 8/31/2022 10:21:31 PM
 *  Author: lenovo
 */ 


#ifndef LED_H_
#define LED_H_
#include "c:\users\afrotto\Documents\Atmel Studio\7.0\My first project\My first project\MCAL\Dio Driver\Dio.h"

/*
Function Name        : LED_Init
Function Returns     : void
Function Arguments   : uint8_t portName,uint8_t pinNumber
Function Description : Initialize the pin as an output pin to connect the led.
*/
void LED_Init(uint8_T portName,uint8_T pinNumber);
/*
Function Name        : LED_TurnOn
Function Returns     : void
Function Arguments   : uint8_t portName,uint8_t pinNumber
Function Description : Turn on the led connected to the given pin and port.
*/
void LED_TurnOn(uint8_T portName,uint8_T pinNumber);
/*
Function Name        : LED_TurnOff
Function Returns     : void
Function Arguments   : uint8_t portName,uint8_t pinNumber
Function Description : Turn off the led connected to the given pin and port.
*/
void LED_TurnOff(uint8_T portName,uint8_T pinNumber);
/*
Function Name        : LED_Toggle
Function Returns     : void
Function Arguments   : uint8_t portName,uint8_t pinNumber
Function Description : Toggle the led connected to the given pin and port.
*/
void LED_Toggle(uint8_T portName,uint8_T pinNumber);



#endif /* LED_H_ */