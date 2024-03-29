#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a
 * memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated
 * with a call to malloc: malloc(old_size)
 * @old_size: the size in bytes of the allocated space
 * @new_size: the new size in bytes of the new memory block
 *
 * Return: ptr but do nothing if new_size == old_size
 * if malloc fails, return NULL
 * return: ptr
 */

void *_realloc(void *ptr, unsigned int old_size,
		unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
