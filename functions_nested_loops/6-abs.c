#include "main.h"
#include <stdio.h>

/**
 * main - main check
 * _abs -  computes the absolute value of a integer.
 * @n: The number to be computed
 * Return: 0
 */
int _abs(int n)
{
	/*int n;*/
	if (n < 0)
		return (-n);
	else
		return (n);
}
