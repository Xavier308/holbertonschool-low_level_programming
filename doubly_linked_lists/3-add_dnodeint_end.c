#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: A double pointer to the head of the dlistint_t list
 * @n: The integer for the new node to contain
 *
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	/* Allocate memory for the new node */
	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL) /* Check if the malloc failed */
	{
		return (NULL);
	}

	new_node->n = n; /* Set the data for the new node */
	new_node->next = NULL; /* New node will be at the end, so next is NULL */

	if (*head == NULL) /* Check if the list is empty */
	{
		new_node->prev = NULL; /* Set prev to NULL because it's the first node */
		*head = new_node; /* Point head to the new node */
	}
	else
	{
		temp = *head;
		while (temp->next != NULL) /* Traverse the list to find the last node */
		{
			temp = temp->next;
		}
		temp->next = new_node; /* Set the last node's next to the new node */
		new_node->prev = temp; /* Set the new node's prev to the last node */
	}

	return (new_node); /* Return the address of the new node */
}

