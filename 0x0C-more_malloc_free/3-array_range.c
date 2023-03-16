#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum to be checked
 * @max: maximum to be checked
 *
 * Return: pointer
 * returns NULL if min > max
 * returns NULL if fails
 */

int *array_range(int min, int max)
{
	int *m;
	int i;

	if (min > max)
		return (NULL);

	m = malloc(sizeof(*m) * ((max - min) + 1));

	if (m == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		m[i] = min;

	return (m);
}
