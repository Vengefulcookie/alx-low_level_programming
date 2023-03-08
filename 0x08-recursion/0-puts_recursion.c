#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function that prints a string
 *
 * @s: to be checked
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
