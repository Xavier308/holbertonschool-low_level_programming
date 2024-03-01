#include "main.h"
#include <limits.h>

/**
 * _atoi - convert a string to an integer.
 * @s: The string to be converted.
 *
 * Description: This function converts the initial portion of the string
 * pointed by s to int representation. It handles optional leading whitespace
 * and plus/minus signs. It stops converting when it encounters
 * a non-digit character.
 *
 * Return: The int converted from the string.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;

	} while (*s++);

	return (num * sign);
}
