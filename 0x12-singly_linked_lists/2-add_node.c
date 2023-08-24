#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - function that adds a new node
 * at the beginning of a list_t list
 *
 * @head: double pointer
 * @str: new string to be added
 *
 * Return: the address of the new element,
 * or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *upg;
	unsigned int len = 0;

	while (str[len])
		len++;

	upg = malloc(sizeof(list_t));
	if (!upg)
		return (NULL);

	upg->str = strdup(str);
	upg->len = len;
	upg->next = (*head);
	(*head) = upg;

	return (*head);
}
