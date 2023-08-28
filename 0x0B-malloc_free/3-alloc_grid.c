#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 *
 * @width: input width
 * @height: input height
 *
 * Return: Null if it fails, pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int **rid;
	int m;
	int n;

	if (width <= 0 || height <= 0)
		return (NULL);

	rid = malloc(sizeof(int *) * height);

	if (rid == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		rid[m] = malloc(sizeof(int) * width);

		if (rid[m] == NULL)
		{
			for (;m >= 0; m--)
				free(rid[m]);

			free(rid);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
			rid[m][n] = 0;
	}

	return (rid);
}
