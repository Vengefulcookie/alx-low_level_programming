#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns
 * sum of all parameters
 *
 * @n: number of parameters passed
 * to function
 *
 * Return: 0 if n == 0, otherwise
 * Return sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	else
	unsigned int i;

	sum = 0;

	va_list r;

	va_start(r, n);

	for (i = 0; i < n; i++)
		sum += va_arg(r, int);

	va_end(r);
	return (sum);
}
