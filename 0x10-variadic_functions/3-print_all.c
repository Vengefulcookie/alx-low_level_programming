#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything
 *
 * @format: a list of types of arguments
 * passed to the function
 *
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	*sep = "";

	va_list check;

	va_start(check, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(check, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(check, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(check, double));
					break;
				case 's':
					str = va_arg(check, char *);
					if (!str)
						str = "nil";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(check);
}
