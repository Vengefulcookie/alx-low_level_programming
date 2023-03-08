#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - function returns the length of string
 *
 * @s: to be checked
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int m = 0;

	if (*s)
	{
		m++;
		m += _strlen_recursion(s + 1);
	}
	return (m);
}
