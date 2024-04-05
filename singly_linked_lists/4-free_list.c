#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: a pointer to the head of the list_t list
 */
void free_list(list_t *head)
{
	list_t *current_node;
	list_t *next_node;

	current_node = head; /* Start with the head of the list */

	while (current_node != NULL)
	{
		next_node = current_node->next; /* Save the next node */
		free(current_node->str); /* Free the string in the current node */
		free(current_node); /* Free the current node itself */
		current_node = next_node; /* Move to the next node */
	}
}

