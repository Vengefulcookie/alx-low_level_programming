#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an
 * array, using malloc
 *
 * @nmemb: array of elements
 * @size: bytes size
 *
 * Return: NULL if malloc fails or
 * If nmemb or size is 0
 * pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (m = 0; m < (nmemb * size); m++)
		ptr[m] = 0;

	return (ptr);
}
