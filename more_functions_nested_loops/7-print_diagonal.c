#include "main.h"

/**
 * print_diagonal - function that draws a straight line in the terminal.
 *
 *@n: It is the number of times the character \ should be printed
 **/

void print_diagonal(int n)
{

	int i, j;
	char space = 32;
	char slash = 92;
	char newLine = '\n';

	if (n > 0)
	{
		for  (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(space);
			}
			_putchar(slash);
			_putchar(newLine);
		}
	}
	else
	{
		_putchar(newLine);
	}
}
