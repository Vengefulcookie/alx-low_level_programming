#include "main.h"

/**
 * print_sign - function prints sign of a number
 *
 * @n: to be checked
 *
 * Return: 1 if n is greater than zero print +
 * and 0 if n is zero print 0
 * and -1 if n is less than zero print -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
}
