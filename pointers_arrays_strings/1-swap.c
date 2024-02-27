#include "main.h"

/**
 * swap_int - That swaps the values of two integers
 * @a: First pointer
 * @b: Second pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
