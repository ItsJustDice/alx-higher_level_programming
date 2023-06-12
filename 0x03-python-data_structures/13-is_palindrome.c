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
	listint_t *current = *head; /* Make a pointer to currently selected node */
	listint_t *next = NULL; /* Set-up temp pointer to hold following node */

	while (current)
	{
		next = current->next; /* In the temp pointer, save following node */
		current->next = prev; /* Set current nodes next pointer to preceding node */
		prev = current; /* Update previous node pointer to current node */
		current = next; /* Update current node before moving to following node */
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
	listint_t *slow = *head, *fast = *head, *temp = *head, *dup = NULL;

	if (*head == NULL || (*head)->next == NULL)
		return (1); /* Return 1 if linked list empty or has only 1 element */

	while (1) /* infinite loop */
	{
		fast = fast->next->next; /* two nodes are added to the 'fast' pointer */
		if (!fast) /* if 'fast' is the last item on the list */
		{
			dup = slow->next; /* sets "dup" to node following "fast" */
			break;
		}
		if (!fast->next) /* When 'fast' reaches the next-to-last node */
		{
			dup = slow->next->next; /* sets "dup" to 2nd node after "slow" */
			break;
		}
		slow = slow->next; /* shifts the 'slow' pointer forward by one node */
	}

	reverse_listint(&dup);

	while (dup && temp)
	{
		if (temp->n == dup->n) /* data values at 'temp' and 'dup' are equal */
		{
			dup = dup->next; /* Moves 'dup' to following node */
			temp = temp->next; /* Moves 'temp' to the next node */
		}
		else
			return (0);
	}

	if (!dup)
		return (1);

	return (0);
}
