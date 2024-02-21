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
	char letter = 'z';
	
	while(letter <= 'a')
	{		
		putchar(letter);
		letter--;
	}	
	putchar('\n');
	return (0);
}	
