#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of
 * chars, and initializes it with a specific char
 *
 * @size: array size
 * @c: to be assigned
 *
 * Return:NULL if it fails, if size is 0
 * return pointer to an array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int m;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
		return (NULL);

	for (m = 0; m < size; m++)
		ptr[m] = c;
	return (ptr);
}
