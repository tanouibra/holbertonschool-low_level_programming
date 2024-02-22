#include "main.h"
/**
 * print_alphabet - make the alphabet
 * alphabet avec _putchar
 * Write a function that prints the alphabet, in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char let;

	for (let = 'a';  let <= 'z'; let++)
		_putchar(let);
	_putchar('\n');
	/*return (0);*/
}
