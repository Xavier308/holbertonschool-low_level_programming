#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first one
 * @str: The string to be processed
 *
 * Description: This function goes through the string given by the pointer
 * `str` and prints every character at an even index, starting at 0.
 * After reaching the end of the string, it outputs a
 * newline character.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
		_putchar('\n');
}
