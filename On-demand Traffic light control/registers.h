/*
 * registers.h
 *
 * Created: 8/31/2022 6:03:01 AM
 *  Author: lenovo
 */ 


#ifndef REGISTERS_H_
#define REGISTERS_H_

//PORTA REGISTERS
#define PORTA *((volatile uint8_t*)(0x3B))
#define DDRA *((volatile uint8_t*)(0x3A))
#define PINA *((volatile uint8_t*)(0x39))

//PORTB REGISTERS
#define PORTB *((volatile uint8_t*)(0x38))
#define DDRB *((volatile uint8_t*)(0x37))
#define PINB *((volatile uint8_t*)(0x36))

//PORTC REGISTERS
#define PORTC *((volatile uint8_t*)(0x35))
#define DDRC *((volatile uint8_t*)(0x34))
#define PINC *((volatile uint8_t*)(0x33))

//PORTD REGISTERS
#define PORTD *((volatile uint8_t*)(0x32))
#define DDRD *((volatile uint8_t*)(0x31))
#define PIND *((volatile uint8_t*)(0x30))

/*******************************TIMER0 REGISTERS*******************/
#define TCCR0 *((volatile uint8_t*)(0x53))
#define TCNT0 *((volatile uint8_t*)(0x52))
#define TIFR *((volatile uint8_t*)(0x58))
#define OCR0 *((volatile uint8_t*)(0x5C))

/************************************************************************/
/* INTERRUPT REGISTERS                                                  */
/************************************************************************/
#define GICR *((volatile uint8_t*)(0x5B))
#define MCUCR *((volatile uint8_t*)(0x55))
#define MCUCSR *((volatile uint8_t*)(0x54))
#define SREG *((volatile uint8_t*)(0x5F))
#define GIFR *((volatile uint8_t*)(0x5A))
/************************************************************************/
/* ADC REGISTERS                                                        */
/************************************************************************/
#define ADMUX *((volatile uint8_t*)(0x27)) //for select which ch of adc and select ref voltage source &adlar
#define ADCH *((volatile uint8_t*)(0x25))
#define ADCL *((volatile uint8_t*)(0x24))
#define ADCSRA *((volatile uint8_t*)(0x26))//the ADC Enable bit

#endif /* REGISTERS_H_ */