#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 *             to get from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m; /* Find differing bits */
	unsigned int count = 0;

	/* Count the number of set bits in xor */
	while (xor > 0)
	{
		count += (xor & 1);
		xor >>= 1;
	}

	return (count);
}

