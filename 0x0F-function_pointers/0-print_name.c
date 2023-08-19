#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints a name
 *
 * @name: to be printed
 * @f: the pointer to the function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
