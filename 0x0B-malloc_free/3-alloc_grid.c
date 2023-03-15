#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid -  returns a pointer to a 2
 * dimensional array of integers
 *
 * @width: to be checked
 * @height: to be checked
 *
 * Return: width or height is 0, return NULL
 * return NULL if failure
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int k;

	if (width <= 0 || height <= 0)
		return (NULL);

	i = malloc(sizeof(int *) * height);

	if (i == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		i[j] = malloc(sizeof(int) * width);

		if (i[j] == NULL)
		{
			for (; j >= 0; j--)
				free(i[j]);

			free(i);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			i[j][k] = 0;
	}

	return (i);
}
