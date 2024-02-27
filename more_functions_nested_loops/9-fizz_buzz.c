#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 *fizz_buzz - Fonction that prints numbers from 1 to 100
 *@i: Number to be printed
 *Return: void
 */
int  main()
{
	int i;

	for (i = 1; i <= 100; i++)
	{	
		if (i % 3 == 0 &&  i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
		else
			
			printf("\n");
	}
	return (0);
}
