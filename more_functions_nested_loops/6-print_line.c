#include "main.h"

/**
 * print_line - The fonction that draws a straight line in the terminal
 * @n: The number of times the caracter _ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int c, i;

	c = 0;

	while (n > 0)
	{
		i = c;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		c++;
		n--;
	}
	if (c < 1)
		_putchar('\n');
}

