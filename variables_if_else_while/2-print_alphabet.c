nclude <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - main block
 * more headers goes there
 * betty style doc for function main goes there
 * Return: 0
 */
int main()
{
	char letter = 'a';

	while (letter <= 'z')
       	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return 0;
}

