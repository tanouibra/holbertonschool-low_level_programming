#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*main - main block
* Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line
* Retrun: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter ='A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar("\n");
	return (0);
}
