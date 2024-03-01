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
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > INT_MAX / 10 ||
				(result == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
		{
			if (sign == -1 &&
					(result == INT_MAX / 10 && s[i] - '0' == INT_MAX % 10 + 1))
			{
				result = -1 * (result * 10 + s[i] - '0');
				i++;
				break;
			}

			break;
		}
		result = result * 10 + (s[i++] - '0');
	}

	return (sign * result);
}
