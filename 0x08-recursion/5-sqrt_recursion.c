#include "main.h"
#include <stdio.h>

/**
 * natural_sqrt_recursion- recursive function used to
 * find the natural square root of a number
 *
 * @n: value to be checked
 * @g: a guess value/placeholder
 *
 * Return: the natural square root of a number
 */

int natural_sqrt_recursion(int n, int g)
{
	if ((g * g) > n)
	{
		return (-1);
	}
	if ((g * g) == n)
	{
		return (g);
	}
	return (natural_sqrt_recursion(n, g + 1));
}

/**
 * _sqrt_recursion- function that returns the natural square root
 * of a number
 * natural_sqrt_recursion- recursive function used to find
 * the natural square root of a number
 *
 * @n: value to be checked
 *
 * Return: -1 if n does not have a
 * natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (natural_sqrt_recursion(n, 0));
}
