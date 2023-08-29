#include "lists.h"

/**
 * print_listint - function that prints all
 * the elements of a listint_t list
 *
 * @h: type of linked list to be printed
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t abc123 = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		abc123++;
		h = h->next;
	}

	return (abc123);
}
