#ifndef LISTS.H
#define LISTS.H

#include <stdlib.h>

/**
 * struct listint_s - Entry point
 * @next: pointer to following node
 * @n: integer
 * Description: node structure for single linked list for the Holberton project
 */
typedef struct listint_s
{
	int n; /* integer n stored in node */
	struct listint_s *next; /* pointer to following node in list */
} listint_t; /* alternative name for structs singly linked list */

size_t print_listint(const listint_t *h); /* prints elements of linked list */
/* adds new node at start of linked list */
listint_t *add_nodeint(listint_t **head, const int n);
/* sets head of linked list to NULL to free it */
int check_cycle(listint_t *list);
/* yields 0 or 1 depending on if it finds a cycle in a linked list */
void free_listint(listint_t *head);

#endif /* LISTS.H */
