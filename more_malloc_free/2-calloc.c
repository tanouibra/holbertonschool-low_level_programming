#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory for array of nmemb elements of size bytes
 * @nmemb: Number of elemnts
 * @size: Size in bytes of elements
 * Return: Pointer to new memory, NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pot;
	unsigned i, art;

	if (nmemb == 0 || size == 0)
		return (NULL);
	art = nmemb * size;
	pot = malloc(art);
	while ( i < art)
	{
		pot[i] = 0;
		i++;
	}
	return (pot);
}
