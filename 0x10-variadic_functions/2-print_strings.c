#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings
 *
 * @n: number of strings passed to the function
 * @separator: is the string to be printed
 * between the strings
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list string;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char *);

		if (str == NULL)
			printf("nil");

		if (!separator)
			printf("%s", str);

		else if (separator && (i == 0))
			printf("%s", str);

		else
			printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(string);
}
