#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - main block
 * more headers goes there
 * betty style doc for function main goes there
 * Return: 0
  */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (lastDigit > 5)
	{
		printf("last digit of %d is %d and is greater 5\n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	}
	else if (lastDigit < 6)
	{
		printf("last digit of %d is %d and is 0\n", n, lastDigit);
	}

	return (0);
}

