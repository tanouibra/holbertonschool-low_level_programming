#include "main.h"
/**
 * _islower - ckecks for lowcase character
 * @c: The character to be checked
 *  Return: 0 for lowcase character and 0 for anything else
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
