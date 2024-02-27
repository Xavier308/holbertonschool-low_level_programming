#include "main.h"

/**
 * more_numbers - function that prints the numbers, from 0 to 14,
 *                10 times, followed by a new line.
 *
 *
 *
 * Return: Always 0 (Sucess)
 */
void more_numbers(void)
{
	int count;
	int number;

	for (count = 0; count <= 9; count++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
			{
				_putchar((number / 10) + '0');
			}
			_putchar((number % 10) + '0');
		}

		_putchar('\n');
	}
}
