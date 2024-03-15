#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string,
 * or NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i = 0, len = 0;

	if (!str)
		return (NULL);

	while (str[len])
		len++;
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[len] = '\0';

	return (dup);
}

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A new dog struct with a copy of name and owner, or NULL if fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	doggo = malloc(sizeof(dog_t));
	if (!doggo)
		return (NULL);

	doggo->name = _strdup(name);
	if (!doggo->name)
	{
		free(doggo);
		return (NULL);
	}

	doggo->age = age;

	doggo->owner = _strdup(owner);
	if (!doggo->owner)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}

	return (doggo);
}

