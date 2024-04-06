#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number to search
 * @index: The index, starting from 0, of the bit you want to get
 *
 * Return: The value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* Check if index is out of unsigned long int range */
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	/* Shift n right by index and bitwise AND with 1 to isolate the bit */
	return ((n >> index) & 1);
}

