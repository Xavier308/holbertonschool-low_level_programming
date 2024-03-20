#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - prints a character
 * @args: list of arguments from which the character will be taken
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an integer
 * @args: list of arguments from which the integer will be taken
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: list of arguments from which the float will be taken
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: list of arguments from which the string will be taken
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (!str)
		str = "(nil)";

	printf("%s", str);
}

/**
 * print_all - prints anything, following a specified format
 * @format: list of types of arguments passed to the function
 *
 * Description: 'c' for char, 'i' for integer, 'f' for float,
 * 's' for char*. Prints (nil) if a string is NULL.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *sep = "";
/* The following line was divided because the 80 characters rule */
	void (*func_arr[])(va_list) = {
		print_char,
		print_int,
		print_float,
		print_string
	};

	const char fmt_types[] = "cifs";

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (fmt_types[j])
		{
			if (format[i] == fmt_types[j])
			{
				printf("%s", sep);
				func_arr[j](args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);

	printf("\n");
}

