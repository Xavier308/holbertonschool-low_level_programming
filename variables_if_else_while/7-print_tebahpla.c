#include <stdio.h>

/**
 * main - A program that prints with putchar fuction
 *	  the alphabet in rever with lowercase,
 *	  followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
