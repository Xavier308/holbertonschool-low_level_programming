#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - Calculate the length of a string.
 * @str: The string to measure.
 *
 * Return: The length of the string.
 */
unsigned int _strlen(const char *str)
{
	unsigned int length = 0;
		while (str[length])
		length++;
	return (length);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the beginning of the list_t list
 * @str: string to duplicate into the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *duplicate_str;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Duplicate the string for the new node */
	duplicate_str = strdup(str);
	if (duplicate_str == NULL) /* Check strdup success */
	{
		free(new_node); /* Clean up if strdup failed */
		return (NULL);
	}

	/* Initialize new node */
	new_node->str = duplicate_str;
	new_node->len = _strlen(duplicate_str);
	new_node->next = *head; /* Point to the previous first node */

	/* Move head to point to the new node */
	*head = new_node;

	return (new_node); /* Return the address of the new node */
}

