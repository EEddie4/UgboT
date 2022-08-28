#include "lists.h"
/**
 * check_cycle - checks for a cycle in
 * a singly linked list
 * @list: singly linked list
 * Return: 1 or 0
 */
int check_cycle(listint_t *list)
{
	listint_t *t = list;
	listint_t *g = list;

	if (!list)
	{
		return (0);
	}
	while (t && g && g->next)
	{
		t = t->next;
		g = g->next->next;
		if (t == g)
		{
			return (1);
		}
	}
	return (0);
}
