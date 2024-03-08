#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	/* Checks that exactly two arguments are given */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Converts string arguments to integers and multiplies them */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	/* Prints the result of the multiplication */
	printf("%d\n", result);

	return (0);
}

