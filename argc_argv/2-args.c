#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	/* Iterates over each argument and prints it */
	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}

	return (0);
}
