#include"../usart/usart.h"
#include"../pin_driver/pin.h"
#include"../tajmer/tajmer.h"
#include"../util/util.h"
#include<util/delay.h>
#include<avr/io.h>
#include<stdlib.h>


int main ()
{
	int8_t duzina;
	usartInit(9600);


	while(1)
	{
		usartPutString("Unesite duzinu niza");
		while(!usartAvailable());

		_delay_ms(100);

		usartGetChar(duzina);
	}
	return 0 ;
}
