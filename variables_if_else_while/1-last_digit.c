#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - main block
 * This program will assign a random number to the variable n
 * betty style doc for function main goes there
 * Return: 0
 */
int main(void)
{
	int n;
       
	int lastDigit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
		printf("last digit of %d is %d and is greater 5\n", n, n % 10);
	else if
		( (n % 10) < 6 && (n % 10) != 0)
			printf("last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	else
		printf("last digit of %d is %d and is 0\n", n, n % 10);

	return (0);
}

