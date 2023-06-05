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

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
int check_cycle(listint_t *list);
void free_listint(listint_t *head);

#endif /* LISTS.H */
