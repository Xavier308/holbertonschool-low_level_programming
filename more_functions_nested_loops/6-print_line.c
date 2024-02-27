#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 *
 *@n: It is the number of times the character _ should be printed
 **/

void print_line(int n)
{


	char underScore = 95;
	char newLine = '\n';
	int count = 0;

	if (n > 0)
	{
		while (count++ < n)
		{
			_putchar(underScore);
		}

		_putchar(newLine);
	}

	else
	{
		_putchar(newLine);
	}
}
