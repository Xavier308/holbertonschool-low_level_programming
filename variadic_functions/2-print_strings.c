#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to print between strings
 * @n: the number of strings passed to the function
 *
 * Description: If separator is NULL, do not print it. If one of the strings
 * is NULL, print (nil) instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	const char *str;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, const char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(strings);

	printf("\n");
}

