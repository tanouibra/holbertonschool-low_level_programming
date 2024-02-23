#include "main.h"

/**
 * jack_bauer - Prints every minutes of the day of Jack Bauer
 * Return: void
 */
void jack_bauer(void)
{
	int hour;
	int minute;
	for (hour = 0; hour < 24; hour++) {
        	for (minute = 0; minute < 60; minute++) {
            	/* Print the hour (tens and ones digits)*/
            	_putchar(hour / 10 + '0');
            	_putchar(hour % 10 + '0');
            	_putchar(':');
            	/* Print the minute (tens and ones digits)*/
            	_putchar(minute / 10 + '0');
            	_putchar(minute % 10 + '0');
            	_putchar('\n'); /* Move to the next line*/
        	}
       }
}
