#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at
 * the end of a listint_t list
 *
 * @head: first node pointer
 * @n: information to be used
 *
 * Return: address of new element
 * or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *upg;
	listint_t *placeh = *head;

	upg = malloc(sizeof(listint_t));

	if (upg == NULL)
	{
		return (NULL);
	}

	upg->n = n;
	upg->next = NULL;

	if (*head == NULL)
	{
		*head = upg;
		return (upg);
	}

	while (placeh->next != NULL)
	{
		placeh = placeh->next;
	}
	placeh->next = upg;

	return (upg);
}
