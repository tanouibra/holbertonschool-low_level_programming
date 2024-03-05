#include "main.h"

/**
 * factorial - Returns the factoriel of a givent number
 * @n: number
 * Retrun: 1 if (n == 0 || n == 1)
 * (n * factorial(n - 1)); if n > 1
 * -1 if n < 0
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n > 1)
		return (n * factorial(n - 1));
	else
		return (-1);
}
