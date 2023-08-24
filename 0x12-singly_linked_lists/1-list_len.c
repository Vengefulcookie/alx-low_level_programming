#include "lists.h"
#include <stdlib.h>

/**
 * list_len - function that returns the
 * number of elements in a linked list_t list
 *
 * @h: pointer
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t numelem = 0;

	while (h)
	{
		numelem++;
		h = h->next;
	}

	return (numelem);
}
