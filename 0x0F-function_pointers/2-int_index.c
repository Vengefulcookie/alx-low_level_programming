#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: to be checked
 * @size: size of array
 * @cmp: pointer to function used to compare values
 *
 * Return: index of the first element for which
 * the cmp function does not return 0
 * return: -1 if no element matches or
 * size is less than 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
