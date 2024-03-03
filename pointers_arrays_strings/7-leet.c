#include "main.h"

/**
 * leet - encode a string into 1337
 * @s: string
 * Return: encoded string `s`
 */

char *leet(char *s)
{
	int i;
	int j;
	char n1[] = "aAeEoOtTlL";
	char n2[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == n1[j])
				s[i] = n2[j];
		}
	}

	return (s);
}
