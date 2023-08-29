#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new
 * node at a given position
 *
 * @head: first node pointer
 * @idx: index
 * @n: information to be added
 *
 * Return: the address of the new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *upg;
	listint_t *placeh = *head;

	upg = malloc(sizeof(listint_t));

	if (!upg || !head)
	{
		return (NULL);
	}

	upg->n = n;
	upg->next = NULL;

	if (idx == 0)
	{
		upg->next = *head;
		*head = upg;

		return (upg);
	}

	for (m = 0; placeh && m < idx; m++)
	{
		if (m == idx - 1)
		{
			upg->next = placeh->next;
			placeh->next = upg;

			return (upg);
		}
		else
			placeh = placeh->next;
	}

	return (NULL);
}
