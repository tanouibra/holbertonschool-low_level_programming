#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 * Return: void
 */
void times_table(void)
{
	int i, j, result;

	/* Loop through each row*/
	for (i = 0; i <= 9; i++)
	{
		/* Loop through each column*/
		for (j = 0; j <= 9; j++)
		{
			result = i * j; /* Calculate the multiplication result*/
			/* Print the result*/
			if (result < 10)
			{
				_putchar(result + '0'); /* Print the ones digit*/
			}
			else
			{
				_putchar(result / 10 + '0'); /* Print the tens digit*/
				_putchar(result % 10 + '0'); /* Print the ones digit*/
			}
			/* Print a comma and space unless it's the last column*/
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n'); /* Newline at the end of each row*/
			}
		}
	}
}
