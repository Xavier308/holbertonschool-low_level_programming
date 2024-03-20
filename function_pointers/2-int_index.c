#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array via a comparison function.
 * @array: array of integers to search through.
 * @size: number of elements in the array.
 * @cmp: pointer to the comparison function.
 *
 * Return: the index of the first element for which cmp does not return 0.
 *         Returns -1 if no element matches or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}

	return (-1);
}

