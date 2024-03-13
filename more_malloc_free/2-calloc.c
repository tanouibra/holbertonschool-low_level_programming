#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocate memory for an array and set memory to zero
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 * This function allocates memory for an array of nmemb elements,
 * each of size bytes, and sets the memory to zero.
 * If nmemb or size is 0, or if malloc fails, the function does nothing.
 */
void _calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;
    unsigned int total_size;
    if (nmemb == 0 || size == 0)
        return;
    total_size = nmemb * size;
    ptr = malloc(total_size);
    if (ptr == NULL)
        return;
    memset(ptr, 0, total_size);
}
