#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 *
 *@size: It is the size of the square
 *       If size is 0 or less, the function
 *       should print only a new line
 **/

void print_square(int size)
{

	int i, j;
	char square = 35;
	char newLine = '\n';

	if (size <= 0)
	{
		_putchar(newLine);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(square);
			}
			_putchar(newLine);
		}
	}
}
