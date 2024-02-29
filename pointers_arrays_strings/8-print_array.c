#include "main.h"
#include <stdio.h>

/**
 * print_array -  Prints n elements of an array of integers
 * @a: pointer
 * @n: The number of an array of integers
 * Return: void
 */
void print_array(int *a, int n)
{
int inc;
for (inc = 0; inc < n ; inc++)
{
if (inc != n - 1)
printf("%d, ", a[inc]);
else
printf("%d", a[inc]);

}
printf("\n");
}

