#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1) /* Handle recursion until only the last bit is left */
		print_binary(n >> 1);

	_putchar((n & 1) + '0'); /* Print the last bit, convert 0 or 1 to char */
}

