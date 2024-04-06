#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list
 * @head: Double pointer to the head of the list
 * @index: Index of the node to delete, starts at 0
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *toDelete = NULL;
	unsigned int i = 0;

	if (!head || !*head) /* Check for empty list */
		return (-1);
	if (index == 0) /* Handle deletion at head */
	{
		toDelete = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(toDelete);
		return (1);
	}
	while (current && i < index) /* Find node at index */
	{
		current = current->next;
		i++;
	}
	if (!current) /* Index out of bounds */
		return (-1);
	toDelete = current;
	if (current->next)
		current->next->prev = current->prev;
	if (current->prev)
		current->prev->next = current->next;
	free(toDelete);
	return (1);
}

