#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to the array of integers
 * @n: number of elements of the array to be printed
 *
 * Description: This function goes through the first n elements of the
 * array pointed to by a and prints each, followed by a comma and a space,
 * except after the last element. It uses printf for printing.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
