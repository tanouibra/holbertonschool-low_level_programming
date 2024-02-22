#include "main.h"
/**
 * main - main block
 * alphabet avec _putchar
 * Write a function that prints the alphabet, in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	char let;

	for (let = 'a';  let <= 'z'; let++)
		_putchar(let);
	_putchar('\n');
	/*return (0);*/
}
