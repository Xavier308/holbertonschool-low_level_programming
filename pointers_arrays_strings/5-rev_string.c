#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string to reverse
 *
 * This function reverses the string s in place. It first calculates the
 * length of the string to determine the bounds for swapping characters.
 * Then, it swaps characters from the ends of the string towards the middle
 * using a temporary variable to hold one of the characters during the swap.
 */
void rev_string(char *s)
{
	int i, len = 0;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
