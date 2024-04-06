#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: Pointer to the number
 * @index: The index, starting from 0, of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	/* Validate index against the size of unsigned long int */
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1UL << index; /* Create mask with a 1 at the specified index */
	mask = ~mask; /* Invert the mask, 0 at index and 1s elsewhere */

	*n &= mask; /* Clear the bit at index */
	return (1);
}

