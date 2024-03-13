#include "main.h"
#include <stdlib.h>

/**
 * str_length - Calculates the length of a string.
 * @str: Pointer to the string.
 *
 * Return: The length of the string.
 */
unsigned int str_length(char *str)
{
	unsigned int length = 0;

	while (str && str[length])
		length++;

	return (length);
}

/**
 * str_concat - concatenates two strings.
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 *
 * Return: A pointer to the newly allocated space in memory which contains the
 * contents of s1, followed by the contents of s2, and null terminated. Returns
 * NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int s1_len = str_length(s1);
	unsigned int s2_len = str_length(s2);
	unsigned int i, j;
	char *concat_str = malloc((s1_len + s2_len + 1) * sizeof(char));

	if (concat_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1_len; i++)
	{
		concat_str[i] = s1[i];
	}

	for (j = 0; j < s2_len; j++, i++)
	{
		concat_str[i] = s2[j];
	}
	concat_str[i] = '\0';

	return (concat_str);
}

