#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - Function that returns the length of a string.
 * @s: a string
 * Return: length 
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' ; index++)
		;
	return (index);
}
