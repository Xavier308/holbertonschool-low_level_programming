#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Prints a string followed by a new line, recursively.
 * @s: The string to print.
 */
void _puts_recursion(char *s)
{
	/*
	 * Base case: If we've reached the end of the string,
	 * print a new line
	 */
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	/* Print the current character */
	putchar(*s);

	/* Recursively call _puts_recursion with the next character of the string */
	_puts_recursion(s + 1);
}

