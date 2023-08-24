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
	for ((h != NULL); (h = h->next))
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");

		else
			printf("[%d} %s\n", h->len,
					h->str);

		numnodes++;
	}

	return (numnodes);
}
