#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
void reverse_listint(listint_t **head)
{
	listint_t *prev = NULL; /* To save prior nod, create a temp pointer */
	listint_t *crack = *head; /* Make a pointer to the currently selected node */
	listint_t *next = NULL; /* Set-up temp pointer to hold following node */

	while (crack)
	{
		next = crack->next; /* In the temp pointer, save following node */
		crack->next = prev; /* Set current nodes 'next' pointer to preceding node */
		prev = crack; /* Update previous node pointer to current node */
		crack = next; /* Update current node before moving on to following node */
	}

	*head = prev; /* Make last encountered node, new head of inverted list */
}

/**
 * is_palindrome - checks if a linked list is a palindrome
 * @head: double pointer to the linked list
 *
 * Return: 1 if it is, 0 if not
 */
int is_palindrome(listint_t **head)
{
	listint_t *bloom = *head, *rise = *head, *ling = *head, *dup = NULL;

	if (*head == NULL || (*head)->next == NULL)
		return (1); /* Return 1 if linked list empty or has only 1 element */

	while (1) /* infinite loop */
	{
		rise = rise->next->next; /* two nodes are added to the 'rise' pointer */
		if (!rise) /* if 'raise' is the last item on the list */
		{
			dup = bloom->next; /* sets "dup" to node following "bloom" */
			break;
		}
		if (!rise->next) /* When 'rise' reaches the next-to-last node */
		{
			dup = bloom->next->next; /* sets "dup" to 2nd node after "bloom" */
			break;
		}
		bloom = bloom->next; /* shifts the 'bloom' pointer forward by one node */
	}

	reverse_listint(&dup);

	while (dup && ling)
	{
		if (ling->n == dup->n) /* data values at 'ling' and 'dup' are equal */
		{
			dup = dup->next; /* Moves 'dup' to following node */
			ling = ling->next; /* Moves 'ling' to the next node */
		}
		else
			return (0);
	}

	if (!dup)
		return (1);

	return (0);
}
