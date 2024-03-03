#include "main.h"

/**
 * _strncpy - Copies a string, including the terminating null byte,
 * using at most an inputted number of bytes.
 * If the length of the source string is less than the maximum byte number,
 * the remainder of the destination string is filled with null bytes.
 * Works exactly like strncpy.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes copied.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
