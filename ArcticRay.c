#define MCU attiny85
#define F_CPU 8000000UL

#include <avr/io.h>

#define PIN_PWM_OUT PB0

DDRB |= (1<<PIN_PWM_OUT); 				//PWM at OC0A

TCCR0A |= (1<<COM0A1) | (1<<WGM01) | (1<<WGM00);	//Non-Inverting Fast PWM mode 3 using OCR A unit
TCCR0B |= (1<<CS00);					//No-Prescalar
OCR0A  = 1;						//Set PWM to (1/255)

int main(void){						//Do nothing in loop
  while(1);
  return (1);
}
