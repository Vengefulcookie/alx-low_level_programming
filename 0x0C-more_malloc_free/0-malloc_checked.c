#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked- function that allocates memory
 * using malloc
 *
 * @b: integer to be checked
 *
 * Return: a pointer to the allocated memeory
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;
	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
