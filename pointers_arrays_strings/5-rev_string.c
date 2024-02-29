#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: pointer
 * Return: void
 */
void rev_string(char *s)
{
	char let = s[0];
	int num = 0;
	int i;

	while (s[num] != '\0')
	num++;
	for (i = 0; i < num; i++)
	{
		num--;
		let = s[i];
		s[i] = s[num];
		s[num] = let;
	}
}
