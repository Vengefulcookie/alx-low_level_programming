#include "main.h"
#include <stdio.h>

/**
 * factorial- a function that returns a
 * factorial of a number
 * @n: to be checked
 *
 * Return: -1 to indicate an error and n is lower than 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
