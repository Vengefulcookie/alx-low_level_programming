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
	unsigned int i;

	int sum = 0;

	va_list check;

	va_start(check, n);

	for (i = 0; i < n; i++)
		sum += va_arg(check, int);
	va_end(check);
	return (sum);
}
