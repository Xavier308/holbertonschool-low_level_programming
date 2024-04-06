#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked
 * list
 * @head: pointer to the head of the dlistint_t list
 *
 * Return: sum of all the data (n), or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0; /* Initialize sum */

	/* Iterate through the list */
	while (head != NULL)
	{
		sum += head->n; /* Add the current node's data to sum */
		head = head->next; /* Move to the next node */
	}

	return (sum); /* Return the calculated sum */
}

