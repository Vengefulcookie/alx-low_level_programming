#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list
 *
 * @h: first node pointer
 *
 * Return: size of list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t ab = 0;
	int subs;
	listint_t *placeh;

	if (!h || !*h)
	{
		return (0);
	}

	while (*h)
	{
		subs = *h - (*h)->next;
		if (subs > 0)
		{
			placeh = (*h)->next;
			free(*h);
			*h = placeh;
			ab++;
		}
		else
		{
			free(*h);
			*h = NULL;
			ab++;
			break;
		}
	}
	*h = NULL;

	return (ab);
}
