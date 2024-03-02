#include "main.h"

/**
 * is_separator - Checks if character is a separator.
 * @c: The character to check.
 *
 * Return: 1 if character is a separator, 0 otherwise.
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i = 0;

	while (separators[i])
	{
		if (c == separators[i])
		{
		return (1);
		}
		i++;
		}
		return (0);
	}

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be modified.
 *
 * Return: The modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;

	while (str[i])
	{
		if (is_separator(str[i]))
		{
			capitalize_next = 1;
		}
		else if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 'a' - 'A';
			capitalize_next = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			capitalize_next = 0;
		}
		i++;
	}

	return (str);
}
