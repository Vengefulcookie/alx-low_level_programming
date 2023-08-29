#include "lists.h"

/**
 * add_nodeint -  function that adds a new node at the
 * beginning of a listint_t list
 *
 * @head: first node pointer
 * @n: information needed to be inserted
 *
 * Return: address of the new element
 * or NULL if fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *upg;

	upg = malloc(sizeof(listint_t));

	if (upg == NULL)
	{
		return (NULL);
	}

	upg->n = n;
	upg->next = *head;
	*head = upg;

	return (upg);
}
