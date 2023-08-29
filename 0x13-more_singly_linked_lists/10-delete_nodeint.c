#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the
 * node at index index of a listint_t linked list
 *
 * @head: first node pointer
 * @index: index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head,
		unsigned int index)
{
	listint_t *placeh = *head;
	listint_t *recent = NULL;
	unsigned int m = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(placeh);

		return (1);
	}
	while (m < index - 1)
	{
		if (!placeh || !(placeh->next))
		{
			return (-1);
		}
		placeh = placeh->next;
		m++;
	}
	recent = placeh->next;
	placeh->next = recent->next;
	free(recent);

	return (1);
}
