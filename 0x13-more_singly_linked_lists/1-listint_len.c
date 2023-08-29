#include "lists.h"

/**
 * listint_len - function that returns the number of
 * elements in a linked listint_t list
 *
 * @h: type of linked list to be checked
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t abc123 = 0;

	while (h != NULL)
	{
		abc123++;
		h = h->next;
	}

	return (abc123);
}
