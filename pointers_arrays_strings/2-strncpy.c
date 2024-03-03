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
	int index = 0;

	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}


	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}

	return (dest);
}
