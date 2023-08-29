#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 *
 * @min: value at minimum
 * @max: value at maximum
 *
 * Return: the pointer to the newly created array
 * return NULL if min > max
 * of if malloc fails
 */

int *array_range(int min, int max)
{
	int *ran;
	int m;

	if (min > max)
		return (NULL);

	ran = malloc(sizeof(*ran) * ((max - min) + 1));

	if (ran == NULL)
		return (NULL);

	for (m = 0; min <= max; m++, min++)
		ran[m] = min;

	return (ran);
}
