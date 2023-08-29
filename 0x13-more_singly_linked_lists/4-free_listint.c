#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 *
 * @head: type of linked list needed to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *placeh;

	while (head != NULL)
	{
		placeh = head->next;
		free(head);
		head = placeh;
	}
}
