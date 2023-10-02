#include "lists.h"

/**
 * check_cycle - check if there is a loop in the linked list
 * @list: head of linked list
 * Return: 1 or 0
 */

int check_cycle(listint_t *list)
{
	listint_t *one_step, *two_steps;

	if (!list)
	{
		return (0);
	}
	one_step = list;
	two_steps = list->next;
	while (two_steps && one_step && two_steps->next)
	{
		if (one_step == two_steps)
		{
			return (1);
		}
		one_step = one_step->next;
		two_steps = two_steps->next->next;
	}
	return (0);
}
