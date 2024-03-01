#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: char array string
 * Description: Numbers in the string can be preceded by an infinite number
 * of characters. You need to take into account all the - and + signs
 * before the number. If there are no numbers in the string, the function
 * must return 0. Not allowed to use long, new variables of “type” array,
 * nor hard-code special values.
 * Return: first integer found in string
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int has_number = 0;

	while (s[i] != '\0')
	{

		if (s[i] == '-')
		{
		sign *= -1;
		}

		else if (s[i] >= '0' && s[i] <= '9')
		{
			has_number = 1;
			result = result * 10 + (s[i] - '0');


			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
		}
		i++;
	}


	result *= sign;


	return (has_number ? result : 0);
}
