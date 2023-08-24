#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - function that adds a new node at the end
 * of a list_t list
 *
 * @head: double pointer
 * @str: string for new node
 *
 * Return: the address of the new element
 * or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *upg;
	list_t *placeh = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	upg = malloc(sizeof(list_t));
	if (!upg)
		return (NULL);

	upg->str = strdup(str);
	upg->len = len;
	upg->next = NULL;

	if (*head == NULL)
	{
		*head = upg;
		return (upg);
	}

	while (placeh->next)
		placeh = placeh->next;

	placeh->next = upg;

	return (upg);
}
