#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle: Checks if a singly-linked list contains a cycle
 * @list: A singly-linked list
 *
 * Return: if there is no cycle - 0.
 *	if there is a cycle - 1.
 */
int check_cycle(listint_t *list)
{
	listint_t *first_p, *second_p:

	if (list == NULL || list->next == NULL)
		return (0);

	first_p = list->next;
	second_p = list->next->next;
	
	while (turtle && second_p && second_p->next)
	{
	  if (first_p == second_p)
			return (1);

	first_p = first_p->next;
	second_p = second_p->next->next;
	}

	return (0)
}
