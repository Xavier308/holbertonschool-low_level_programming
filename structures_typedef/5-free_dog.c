#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs.
 * @d: The dog to free.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/* First, free the strings inside the structure */
		free(d->name);
		free(d->owner);
		/* Then, free the dog_t structure itself */
		free(d);
	}
}

