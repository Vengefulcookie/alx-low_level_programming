#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: to be checked
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
	{
		exit(98);
	}
	return (m);
}
