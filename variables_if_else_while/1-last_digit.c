#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - main block
 * This program will assign a random number to the variable n
 * betty style doc for function main goes there
 * Return: 0
  */
int main(void){
	int n;

	srand(time(0));
	n = rand();

	int lastDigit = n % 10;

	printf("The last digit of %d is ", n);

	if (lastDigit > 5)
        {
		printf("and is greater than 5\n");
	}
	else if (lastDigit == 0)
        {
		printf("and is 0\n");
	}
         else
         {
		printf("and is less than 6 and not 0\n");
	}

        return 0;
}

