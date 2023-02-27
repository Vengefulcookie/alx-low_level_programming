#include "main.h"

/**
 * swap_int - function swaps the values of two integers
 *
 * @a: integer to be checked
 * @b: integer to be checked
 *
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
