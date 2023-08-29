#include "lists.h"

/**
 * find_listint_loop - function that finds the loop
 * in a linked list
 *
 * @head: to be looked for
 *
 * Return:  address of the node where the loop starts
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *stop = head;
	listint_t *go = head;

	if (!head)
	{
		return (NULL);
	}

	while (stop && go && go->next)
	{
		go = go->next->next;
		stop = stop->next;

		if (go == stop)
		{
			stop = head;

			while (stop != go)
			{
				stop = stop->next;
				go = go->next;
			}
			return (go);
		}
	}
	return (NULL);
}
