#include "main.h"

/**
 * print_alphabet_x10 - A function that prints the alphabet,
 * in lowercase 10 times, followed by a new line.
 *
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
