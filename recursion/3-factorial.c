#include "main.h"

/**
 * factorial - Returns the factoriel of a givent number
 * @n: number
 * Retrun: factorial number ( -1 or 0 or factoriel(n))
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
