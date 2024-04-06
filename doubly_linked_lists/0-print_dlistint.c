#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the start of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	/* Traverse the list */
	while (h != NULL)
	{
		printf("%d\n", h->n);	/* Print the current node's value */
		h = h->next;		/* Move to the next node */
		nodes++;		/* Increment node counter */
	}

	return (nodes);		/* Return the number of nodes */
}

