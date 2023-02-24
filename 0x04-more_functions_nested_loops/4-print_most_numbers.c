#include "main.h"

/**
 * print_most_numbers - function that prints the numbers
 *
 * Return: always 0
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0' ; c <= '9' ; c++)
	{
		if (!(c == '2' || c == '4'))
			putchar(c);
	}
	putchar('\n');
}
