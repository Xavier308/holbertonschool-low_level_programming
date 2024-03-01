#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the
 * terminating null byte ('\0'), to the buffer pointed to by dest.
 * @dest: Pointer to the destination array where the content is to be copied.
 * @src: String to be copied.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;


	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}


	dest[i] = '\0';

	return (dest);
}
