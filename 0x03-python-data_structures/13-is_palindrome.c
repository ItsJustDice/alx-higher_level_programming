#include "lists.h"
#include <stddef.h>
/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: double pointer to the head of the list
 * Return: 0 if not a palindrome, 1 if a palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *fast = *head;
	listint_t *slow = *head;
	listint_t *prev = NULL;
	listint_t *temp;

	/* Look for a list without any items or one node in the list */
	if (*head == NULL || (*head)->next == NULL)
	{
		return (1);
	}
	/* Divide the list in half, then flip the first half */
	while (fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;  /* rapid two-step pointer movement */
		temp = slow->next;
		slow->next = prev; /* Switch the sluggish pointer's link around */
		prev = slow;
		slow = temp;
	}
	/* there are more even nodes in list, adjust the slow pointer */
	if (fast != NULL)
		slow = slow->next;
	/* Contrast the changed first half with the second half */
	while (slow != NULL)
	{
		if (prev->n != slow->n)
		{
			/* Return 0 if Nodes don't match */
			return (0);
		}
		prev = prev->next;
		slow = slow->next;
	}
	/* Return 1 if all nodes match, it's a palindrome */
	return (1);
}
