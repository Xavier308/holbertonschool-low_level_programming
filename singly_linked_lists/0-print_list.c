#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the start of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;	/* Counter for the number of nodes */

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");	/* Print [0] (nil) if str is NULL */
		else
			printf("[%u] %s\n", h->len, h->str);	/* Print the length and the string */

		nodes++;	/* Increment node count */
		h = h->next;	/* Move to the next node */
	}
	return (nodes);	/* Return the number of nodes */
}

