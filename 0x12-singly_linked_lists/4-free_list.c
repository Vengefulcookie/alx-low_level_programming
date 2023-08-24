#include "lists.h"
#include <stdlib.h>

/**
 * free_list -  function that frees a list_t list
 *
 * @head: to be freed
 *
 */

void free_list(list_t *head)
{
	list_t *placeh;

	while (head)
	{
		placeh = head->next;
		free(head->str);
		free(head);
		head = placeh;
	}
}
