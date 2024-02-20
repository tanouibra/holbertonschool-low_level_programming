#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*main - main block
* Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
* Retrun: 0
 */
int main(void)
{
	char lowcase = "a";
	char uppercase = "A";

	while (lowcase <= "z")
	{	
		putchar(lowcase);
		lowcase++;
	}
	while (uppercase <= "Z")
	{	
		putchar(uppercase);
		uppercase++;
	}
	putchar("\n");

	return (0);
}	
