#include "main.h"

/**
 * print_line - The fonction that draws a straight line in the terminal
 * @n: The number of times the caracter _ should be printed
 * Return: void
 */
void print_line(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		_putchar('_');

		c++;
	}
	_putchar('\n');
}
