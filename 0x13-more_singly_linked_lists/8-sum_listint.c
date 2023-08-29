#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the
 * data (n) of a listint_t linked list
 *
 * @head: the first node
 *
 * Return: sum of all the data, if empty, return 0
 */

int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *placeh = head;

	while (head != NULL)
	{
		total += placeh->n;
		placeh = placeh->next;
	}

	return (total);
}
