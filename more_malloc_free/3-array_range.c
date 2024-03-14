#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: The minimum value included in the array.
 * @max: The maximum value included in the array.
 *
 * Return: A pointer to the newly created array of integers.
 * Returns NULL if min > max or if malloc fails.
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min + i;

	return (array);
}

