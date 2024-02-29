#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: The string to print half of
 *
 * Description: This function prints the second half
 * of the string pointed to by `str`.
 * If the number of characters is odd, it prints
 * the last (length - 1) / 2 characters.
 */
void puts_half(char *str)
{
	int length = 0, i, start;


	while (str[length] != '\0')
	{
		length++;
	}


	if (length % 2 == 0)
	{
	start = length / 2;
	}
	else
	{
		start = (length + 1) / 2;
	}


	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

