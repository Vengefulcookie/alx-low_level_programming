#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints new numbers
 *
 * @n: number of integers passed to the function
 * @separator: the string to be printed between lines
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list check;

	va_start(check, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(check, int));

		else if (separator && (i == 0))
			printf("%d", va_arg(check, int));

	if (i != (n - 1) && separator != NULL)
		printf("%s%d", separator, va_arg(check, int));
	}
	va_end(check);
	printf("\n");
}
