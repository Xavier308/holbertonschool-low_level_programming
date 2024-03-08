#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	/* Print the name of the program */
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}

