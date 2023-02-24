#include "main.h"

/**
 * print_line - function that prints a straight line
 *
 * @n: number of times _ should be printed
 *
 * Return: always 0
 */

void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i;

		for (i = 1 ; i <= n ; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
