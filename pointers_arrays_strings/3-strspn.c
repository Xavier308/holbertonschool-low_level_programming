#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to be scanned
 * @accept: The string containing the list of characters to match in s
 *
 * Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *start = accept;

	while (*s && *accept)
	{
		if (*s == *accept)
		{
			count++;
			s++;
			accept = start;  /*  Reset accept to the start of its string */
		}
		else
		{
			accept++;
		if (*accept == '\0')
		{
			s++;
			accept = start;  /*  Reset accept to start for the next char in s */
		if (*s != *accept)
		{
			while (*accept)
			{
				if (*s == *accept)
				{
				break;
				}
				accept++;
				if (*accept == '\0' && *s != *accept)
				{
					return (count);
				}
				}
				}
			}
		}
	}
	return (count);
}

