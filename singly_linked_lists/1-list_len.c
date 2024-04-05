#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to the start of the list
 * Return: the number of elements (nodes) in the list
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;	/* Initialize node counter */

	while (h != NULL)
	{
		nodes++;	/* Increment node counter */
		h = h->next;	/* Move to the next node */
	}
	return (nodes);		/* Return the total number of nodes */
}

