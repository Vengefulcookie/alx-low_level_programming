#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * *add_node - adds a new node at the beginning
 * of a list_t list
 *
 * @head: original linked list
 * @str: string added to node
 *
 * Return: the address of the new element
 * return NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *m;
	int length = 0;

	m = malloc(sizeof(list_t));
	if (m == NULL)
		return (NULL);

	while (str[length])
		length++;

	m->len = length;
	m->str = strdup(str);
	m->next = *head;
	*head = m;
	return (m);
}
