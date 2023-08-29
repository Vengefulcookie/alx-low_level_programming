#include "lists.h"

/**
 * reverse_listint - function that reverses a
 * listint_t linked list
 *
 * @head: first node pointer
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *befo = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = befo;
		befo = *head;
		*head = next;
	}

	*head = befo;
	return (*head);
}
