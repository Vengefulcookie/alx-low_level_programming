#include "main.h"

/**
 * print_rev - function prints string, in reverse
 *
 * @s: to be checked
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
