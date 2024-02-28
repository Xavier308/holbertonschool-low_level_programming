#include <stdio.h>

/**
 * main - The entry point for the program.
 * Description: Executes the fizzBuzz function to print numbers from 1 to 100
 * following the FizzBuzz rule.
 *
 * Return: 0 if the program executes successfully.
 */

void fizzBuzz(void);

int main(void)
{
	fizzBuzz();
	return (0);
}

/**
 * fizzBuzz - Prints the numbers from 1 to 100, followed by a new line.
 * Description: For multiples of three prints "Fizz" instead of the number
 * and for the multiples of five prints "Buzz". For numbers which
 * are multiples of both three and five prints "FizzBuzz".
 *
 * Return: void.
 */
void fizzBuzz(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
				else if (i % 3 == 0)
				{
					printf("Fizz ");
				}
				else if (i % 5 == 0)
				{
					printf("Buzz ");
				}
				else
				{
					printf("%d ", i);
				}
	}
		printf("/n");
}

