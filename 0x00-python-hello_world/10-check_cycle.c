#include "lists.h"
/**
 * check_cycle - look for loop in linked lists
 * @list: link list to check
 * Description: check for loop in the linked list
 * Return: 1 if cycle, 0 if no cycle is present
 */
int check_cycle(listint_t *list)
{
	/* declare two pointers to navigate the list, bloom and pop */
	listint_t *bloom, *pop;
	/* if list is empty the cycle cannot be present return 0 */
	if (!list)
	{
		return (0);
	}
	/* set the lists intial value for bloom and pop pointers */
	bloom = list;
	pop = list->next;
	/* follow list until end is reached or cycle is crossed */
	while (pop && bloom && pop->next)
	{
		/* should bloom & pop meet then a cycle has occured, return 1 */
		if (bloom == pop)
		{
			return (1);
		}
		bloom = bloom->next; /* move bloom pointer by one node */
		/* move pop pointer by two nodes */
		pop = pop->next->next;
	}
	/* if this point be reached then cycle isn't established, return 0 */
	return (0);
}
