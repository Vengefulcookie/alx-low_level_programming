#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list
 *
 * @head: first node pointer
 *
 * Return: the head node’s data (n), or 0 if it is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *placeh;
	int abc123;

	if (head == NULL)
	{
		return (0);
	}

	abc123 = (*head)->n;
	placeh = (*head)->next;
	free(*head);
	*head = placeh;

	return (abc123);
}
