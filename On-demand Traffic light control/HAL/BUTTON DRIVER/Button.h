/*
 * Button.h
 *
 * Created: 9/1/2022 12:27:44 AM
 *  Author: lenovo
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_
#include "c:\users\afrotto\Documents\Atmel Studio\7.0\My first project\My first project\MCAL\Dio Driver\Dio.h"
/*
Function Name        : ButtonInit
Function Returns     : void
Function Arguments   : uint8_t portName,uint8_t pinNumber
Function Description : define the given pin in the given port as input pin
*/
void ButtonInit(uint8_T portName,uint8_T pinNumber);

/*
Function Name        : ButtonRead
Function Returns     : uint8_t
Function Arguments   : uint8_t portName,uint8_t pinNumber
Function Description : Returns 0 or 1 depend on the status of the button(pressed or not) and the type of connection (pull up or pull down)
*/
uint8_T ButtonRead(uint8_T portName,uint8_T pinNumber);

/*
	Function Name        : connectPullup
	Function Returns     : void
	Function Arguments   : uint8_t portName,uint8_t pinNumber
     Function Description : Connect and disconnect pull up resistor to the given pin at the given port 
*/
 void connectPullup(uint8_T portName,uint8_T pinNumber);
#endif /* BUTTON_H_ */