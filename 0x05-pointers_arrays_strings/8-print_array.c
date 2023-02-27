#include "main.h"
#include <stdio.h>

/**
 * print_array - function prints n elements of an array of integers
 *
 * @a: pointer for first integer
 * @n: number of elements of the array to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
