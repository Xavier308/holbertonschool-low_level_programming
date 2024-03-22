#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a newline
 * @separator: the string to print between numbers
 * @n: the number of integers passed to the function
 *
 * Description: If the separator is NULL, it is not printed.
 * A newline is printed at the end of the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(nums);

	printf("\n");
}

