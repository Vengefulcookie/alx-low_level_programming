#include "main.h"

#include <stdio.h>

/**
 * _isdigit - function checks for a digit
 *
 * @c: to be checked
 *
 * Return: 1 if c is a digit
 * otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
