#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * lowecase alphabet
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
