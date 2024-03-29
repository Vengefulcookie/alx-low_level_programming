#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * print_list - function that prints all
 * the elements of a list_t list
 *
 * @h: singly linked list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t numnodes;

	numnodes = 0;
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len,
					h->str);
		h = h->next;
		numnodes++;
	}

	return (numnodes);
}
