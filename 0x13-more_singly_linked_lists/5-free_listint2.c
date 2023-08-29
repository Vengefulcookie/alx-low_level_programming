#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 *
 * @head: to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *placeh;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		placeh = (*head)->next;
		free(*head);
		*head = placeh;
	}

	*head = NULL;
}
