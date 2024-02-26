#include "main.h"

/**
 * _isupper - Fonction cheks  for uppercase character
 * @c: Character to be cheked
 * Return: 1 if character is uppercase,  0 for otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
