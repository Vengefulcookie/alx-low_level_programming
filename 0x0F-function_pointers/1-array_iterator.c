#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array
 *
 * @size: size of the array
 * @array: array used
 * @action: is the pointer to the function
 *
 * Return: nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
