#include "main.h"

/**
 * print_last_digit - Prints the last digit of  number
 * @n: The number to be treated
 * Return: Value of the last digit number
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}
