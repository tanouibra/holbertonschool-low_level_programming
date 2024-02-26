#include "main.h"

/**
 *_isdigit - A fonction checks  for a digit (0 through 9)
 *@c: Number to be checked
 *Return: 1 ic c is a digit, 0 for otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
