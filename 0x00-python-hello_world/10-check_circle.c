#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * check_cycle - checks for cycles in loop
 * @list: list to take in
 * Return: integer value
 */
int check_cycle(listint_t *list)
{
	listint_t *first_point, *second_point;

	first_point = list;
	second_point = list;
	while (first_point != NULL && second_point != NULL)
	{
		first_point = first_point->next;
		if (second_point->next)
			second_point = second_point->next->next;

		if (first_point == second_point)
			return (1);
	}
	return (0);
}
