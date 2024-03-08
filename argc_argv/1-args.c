#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	/* Avoids the warning for unused argument */
	(void)argv;

	/* Prints the number of arguments passed to the program, minus 1 */
	printf("%d\n", argc - 1);

	return (0);
}

