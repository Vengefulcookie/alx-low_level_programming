#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion- function that returns the length
 * of a string
 * @s: to be checked
 * Return: the length of the string.
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length = length + 1;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
