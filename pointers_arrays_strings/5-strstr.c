#include "main.h"
#include <stddef.h> /* Para NULL */

/**
 * _strstr - Locates a substring
 * @haystack: The main string to be examined
 * @needle: The substring to be searched in haystack
 *
 * Return: Pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h_ptr, *n_ptr;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		h_ptr = haystack;
		n_ptr = needle;
		while (*n_ptr != '\0' && *h_ptr == *n_ptr)
		{
			h_ptr++;
			n_ptr++;
		}
		if (*n_ptr == '\0')
		{
			return (haystack);
		}
		haystack++;
	}

	return (NULL);
}

