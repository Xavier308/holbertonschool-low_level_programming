#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - imprime números seguidos de un salto de línea
 * @separator: el string a imprimir entre números
 * @n: la cantidad de enteros pasados a la función
 *
 * Description: Si el separador es NULL, no se imprime.
 * Se imprime un salto de línea al final de la función.
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

