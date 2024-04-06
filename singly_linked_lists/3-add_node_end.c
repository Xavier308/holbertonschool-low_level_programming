#include "lists.h"
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
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A double pointer to the head of the list_t list.
 * @str: The string to be duplicated into the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	char *duplicate_str;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Duplicate the string */
	duplicate_str = strdup(str);
	if (duplicate_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Initialize the new node */
	new_node->str = duplicate_str;
	new_node->len = _strlen(duplicate_str);
	new_node->next = NULL;

	/* If the list is empty, set the new node as the head */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		/* Traverse the list to find the last node */
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		/* Set the last node's next pointer to the new node */
		temp->next = new_node;
	}

	return (new_node);
}

