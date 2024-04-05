# C - Singly Linked Lists

This project, part of the Holberton School curriculum, introduces the concept of singly linked lists in C programming. Singly linked lists are a type of data structure that consists of nodes where each node contains a piece of data and a pointer to the next node in the sequence.

## Learning Objectives

- Understand when and why to use linked lists vs arrays.
- Learn how to build and use linked lists.


## Data Structures

```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

## Tasks

- **Print list** - Write a function that prints all the elements of a `list_t` list.
- **List length** - Write a function that returns the number of elements in a linked `list_t` list.
- **Add node** - Write a function that adds a new node at the beginning of a `list_t` list.
- **Add node at the end** - Write a function that adds a new node at the end of a `list_t` list.
- **Free list** - Write a function that frees a `list_t` list.


## Acknowledgments

Holberton School for providing the project guidelines and learning objectives.

