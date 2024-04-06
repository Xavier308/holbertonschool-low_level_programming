#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to the start of the list
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	/* Traverse the list */
	while (h != NULL)
	{
		elements++;	/* Increment element counter for each node */
		h = h->next;	/* Move to the next node */
	}

	return (elements);	/* Return the total number of elements */
}

