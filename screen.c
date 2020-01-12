#include <STC15F104E.H>


#define STC_Y5  13043U  // stc 15F/L series
#define Fosc 12000000UL
#define Core STC_Y5

sbit SC=P3^5;

void delay_ms(unsigned int t)
{
    unsigned int i;
    do{
        i = Fosc / Core;
        while(--i);
    }while(--t);
}

void main()
{
		SC = 0;	
		delay_ms(4000);
		SC = 1;
		delay_ms(1000);
		while(1);
}