#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: integer to be included in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t)); /* Allocate memory for new node */
	if (new_node == NULL) /* Check if memory allocation failed */
		return (NULL);

	new_node->n = n; /* Set new node's data */
	new_node->prev = NULL; /* New node will be at the head, so prev is NULL */
	new_node->next = *head; /* Set new node's next to current head */

	if (*head != NULL) /* If list is not empty */
		(*head)->prev = new_node; /* Set current head's prev to new node */

	*head = new_node; /* Point head to the new node */

	return (new_node); /* Return the address of the new node */
}

