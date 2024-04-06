#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the dlistint_t list
 * @index: index of the node, starting from 0
 *
 * Return: the nth node of a dlistint_t linked list, or NULL if the node does
 * not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	/* Traverse the list until the desired index is reached or end of list */
	while (head != NULL)
	{
		if (count == index) /* If the current node is at the desired index */
			return (head); /* Return the current node */
		head = head->next; /* Move to the next node */
		count++;
	}

	/* If the node does not exist, return NULL */
	return (NULL);
}
