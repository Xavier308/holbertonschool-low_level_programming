#include "main.h"

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
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-') /* Flip the sign on every '-' character */
		{
			sign *= -1;
		}
		i++;
	}

	/* Convert the number */
	while (s[i] >= '0' && s[i] <= '9')
	{
		/* Convert char to int and add to result  */
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (sign * result); /* Apply the sign */
}

