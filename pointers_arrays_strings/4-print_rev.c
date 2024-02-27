#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: pointer
 * Return: void
 */
void print_rev(char *s)
{
	char *a = s;
	while (*a != '\0')
		a++;
	a--;
	while (a >= s)
	{
		_putchar(*a);
		a--;
	}
	_putchar('\n');
}
