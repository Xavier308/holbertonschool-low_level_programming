#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int row, col, product, first_digit, second_digit;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			product = row * col;

			/* Print a comma and a space before all but the first number in a row */
			if (col > 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			/*  Handle an extra space for single-digit numbers, except at the start */
			if (product < 10 && col != 0)
			{
				_putchar(' ');
			}

			/*  Break the number into digits and print them */
			if (product >= 10)
			{
				first_digit = product / 10;
				second_digit = product % 10;
				_putchar('0' + first_digit);
				_putchar('0' + second_digit);
			}
			else
			{
				/*  Directly print single-digit numbers */
				_putchar('0' + product);
			}
		}
			_putchar('\n'); /*  Newline at the end of each row */
	}
}

