#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Pointer to the head of the dlistint_t list
 *
 * Description: Iterates through each node of the list and frees them
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next; /* Save the next node */
		free(current); /* Free the current node */
		current = next; /* Move to the next node */
	}
}

