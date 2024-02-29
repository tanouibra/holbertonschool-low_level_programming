#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: pointer
 * Return: void
 */
void rev_string(char *s)
{
	char *let = s;

	while ( *let != '\0')
	{
		let++;
	}
	let--;
	if (s < let)
	{
		char po = *s;
		*s = *let;
		*let = po;
		s++;
		let--;
	}
}
