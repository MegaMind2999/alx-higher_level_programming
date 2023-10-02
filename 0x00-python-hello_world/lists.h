#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdlib.h>

/**
 * struct listint_t - singly linked list
 * @n: integer
 * @next: points to the next node
 */
typedef struct listint_t
{
	int n;
	struct listint_t *next;
} listint_t;

int check_cycle(listint_t *list);
#endif
