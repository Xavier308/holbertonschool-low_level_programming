#include "main.h"
#include <stddef.h> /* Para NULL */

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to search
 * @accept: The set of bytes to search for
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *a_ptr;

	while (*s)
	{
		for (a_ptr = accept; *a_ptr; a_ptr++)
		{
			if (*s == *a_ptr)
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}

