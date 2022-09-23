/*
 * Dio.h
 *
 * Created: 8/31/2022 5:42:11 AM
 *  Author: lenovo
 */ 


#ifndef DIO_H_
#define DIO_H_
//#include"c:\users\afrotto\Documents\Atmel Studio\7.0\My first project\My first project\std_macros.h"
//#include "c:\users\afrotto\Documents\Atmel Studio\7.0\My first project\My first project\registers.h"
#include "../registers.h"
#include "../std_macros.h"
/*
Function Name        : DIO_setPINDir
Function Returns     : void
Function Arguments   : uint8_t portName,uint8_t pinNumber,uint8_t direction
Function Description : Set the direction of the given pin in the given port (direction 0 = input : 1 = output)
*/

void setPinDirection(uint8_T portName,uint8_T pinNumber ,uint8_T direction);
/*
Function Name        : writePin
Function Returns     : void
Function Arguments   : uint8_t portName,uint8_t pinNumber,uint8_t outputValue
Function Description : Set the value of the given pin in the given port (outputValue 0 = low : 1 = high)
*/
void writePin(uint8_T portName ,uint8_T pinNumber , uint8_T outputValue);
/*
Function Name        : readPin
Function Returns     : uint8_t
Function Arguments   : uint8_t portName,uint8_t pinNumber
Function Description : Returns 1 if the value of the given pin is high and zero if the value is low
*/
uint8_T readPin(uint8_T portName,uint8_T pinNumber);
/*
Function Name        : togglePin
Function Returns     : void
Function Arguments   : uint8_t portName,uint8_t pinNumber
Function Description : Reverse the value of the given pin in the given port.
*/
void toggPin(uint8_T portName,uint8_T pinNumber);
/*
Function Name        : setPortDirection
Function Returns     : void
Function Arguments   : uint8_t portName,uint8_t direction
Function Description : set the direction of whole port .
*/
void setPortDirection(uint8_T portName,uint8_T direction);
/*
Function Name        : setPort
Function Returns     : void
Function Arguments   : uint8_t portName,uint8_t portValue
Function Description : Write the value to all port pins.
*/
void setPort(uint8_T portName,uint8_T value);
/*
Function Name        : readPort
Function Returns     : uint8_t
Function Arguments   : uint8_t portName
Function Description : read the value of the port .
*/
uint8_T readPort(uint8_T portName);

#endif /* DIO_H_ */