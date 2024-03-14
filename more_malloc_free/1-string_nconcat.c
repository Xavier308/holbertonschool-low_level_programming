#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string to concatenate up to n bytes.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: A pointer to the newly allocated space in memory containing s1,
 * followed by the first n bytes of s2, and null terminated. Returns NULL
 * if the function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i;
	char *concat_str;

	/* Treat NULL as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of s1 and s2 */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* If n >= len2, use the entire string s2 */
	if (n >= len2)
		n = len2;

	/* Allocate memory for the new string */
	concat_str = malloc(len1 + n + 1);
	if (concat_str == NULL)
		return (NULL);

	/* Concatenate the strings */
	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];
	for (i = 0; i < n; i++)
		concat_str[len1 + i] = s2[i];
	concat_str[len1 + n] = '\0';

	return (concat_str);
}

