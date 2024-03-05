#include "main.h"

/**
 * helper - function recursively finds the square root of n or returns -1
 * _sqrt_recursion - returns the natural square root of a number.
 * @i: is an incrementally updated variable within helper.
 * @n: number
 * Return: sqrt number
 */
int helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (helper(n, i + 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (helper(n, 1));
}
