#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @size: is the number of elements in the array
 * @array: the array used
 * @cmp: pointer to the function to be used to
 * compare values
 *
 * Return: -1 if no element matches, if size < = 0,
 * otherwise return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
