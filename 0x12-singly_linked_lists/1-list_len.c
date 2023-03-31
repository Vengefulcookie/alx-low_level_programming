#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - returns the number of elements
 * in a linked list_t list
 *
 * @h: to be checked
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		m++;
		h = h->next;
	}

	return (m);
}
