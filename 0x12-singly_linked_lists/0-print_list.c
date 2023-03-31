#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: to be checked
 * @m: to be checked
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			m++;
	}

	return (m);
}
