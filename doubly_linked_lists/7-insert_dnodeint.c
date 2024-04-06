#include "lists.h"
#include <stdlib.h> /* Required for malloc and free */

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Double pointer to the head of the dlistint_t list
 * @idx: The index where the new node should be added, starting at 0
 * @n: The integer for the new node to contain
 *
 * Return: The address of the new node,
 * or NULL if it failed or not possible to add
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node, *temp = *h;

	if (idx == 0) /* Add at the beginning */
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t)); /* Allocate memory for the new node */
	if (!new_node)
		return (NULL);
	new_node->n = n;

	while (temp && i < idx) /* Traverse the list to find the position */
	{
		if (i == idx - 1) /* Position found */
		{
		if (temp->next == NULL) /* Add at the end */
		{
			return (add_dnodeint_end(h, n));
		}
		new_node->next = temp->next; /* Middle insertion */
		new_node->prev = temp;
		temp->next->prev = new_node;
		temp->next = new_node;
		return (new_node);
	}
	temp = temp->next; /* Move to the next node */
	i++;
	}
	free(new_node); /* If the position is not found */
	return (NULL);
}

