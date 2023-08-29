#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth
 * node of a listint_t linked list
 *
 * @head: first node to be used
 * @index: is the index of the node
 *
 * Return: the nth node, or NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m = 0;
	listint_t *placeh = head;

	while (placeh && m < index)
	{
		placeh = placeh->next;
		m++;
	}
	return (placeh ? placeh : NULL);
}
