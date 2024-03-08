#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * is_number - Checks if a string represents a positive number
 * @s: The string to check
 * Return: true if the string is a positive number, false otherwise
 */
bool is_number(char *s)
{
	int i = 0;

	/* If the string is empty, it is not a number */
	if (s[i] == '\0')
	{
		return (false);
	}

	/* Check each character of the string */
	for (i = 0; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
		{
			return (false);
		}
	}

	return (true);
}

/**
 * main - Adds positive numbers
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 * Return: 0 on success, 1 if an argument is not a digit
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (is_number(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}

