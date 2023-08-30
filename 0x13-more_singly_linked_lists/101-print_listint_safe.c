#include "lists.h"
#include <stdio.h>

/**
 * loop_listint - determines number of different nodes
 *
 * @head: first node pointer
 *
 * Return: 0 if list is not looped,
 * number of different nodes
 */

size_t loop_listint(const listint_t *head)
{
	const listint_t *up, *down;
	size_t no = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}

	up = head->next;
	down = (head->next)->next;

	while (down)
	{
		if (up == down)
		{
			up = head;
			while (up != down)
			{
				no++;
				up = up->next;
				down = down->next;
			}
			up = up->next;

			while (up != down)
			{
				no++;
				up = up->next;
				down = (down->next)->next;
			}
		}
	}
	return (0);
}
/**
 * print_listint_safe - function that prints a
 * listint_t linked list
 *
 * @head: pointer of first node
 *
 * Return: the number of nodes in the list
 * else if it fails, exit with status (98)
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t no, i = 0;

	no = loop_listint(head);

	if (no == 0)
	{
		for (; head != NULL; no++)
		{
			printf("[%p] %d\n", (void *) head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < no; i++)
		{
			printf("->[%p] %d\n", (void *) head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *) head, head->n);
	}

	return (no);
}
