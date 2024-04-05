#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;             /* String stored in the node */
	unsigned int len;      /* Length of the string */
	struct list_s *next;   /* Pointer to the next node */
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif /* LISTS_H */
