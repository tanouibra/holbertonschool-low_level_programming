#include "main.h"

/**
 * print_line - The fonction that draws a straight line in the terminal
 * @n: The number of times the caracter _ should be printed
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
		_putchar('_');

}

