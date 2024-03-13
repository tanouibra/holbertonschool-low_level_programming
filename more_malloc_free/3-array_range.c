#include <stdlib.h>

/**
 * array_range - Create an array of integers
 * @min: Minimum value (included)
 * @max: Maximum value (included)
 * Return: Pointer to the newly created array
 *         If min > max, returns NULL
 *         If malloc fails, returns NULL
 */
int *array_range(int min, int max)
{
    int *arr;
    int size, i;
    if (min > max)
        return NULL;
    size = max - min + 1;
    arr = malloc(size * sizeof(int));
    if (arr == NULL)
        return NULL;
    for (i = 0; i < size; i++) {
        arr[i] = min++;
    }
    return (arr);
}                                                                                                                                                                                                                    
