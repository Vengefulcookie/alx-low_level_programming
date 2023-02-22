#include "main.h"

/**
 * print_alphabet_x10 - function prints the alphabet x10
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int h;
	char i;

	for (h = 1 ; h <= 10 ; h++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
			_putchar(i);
		_putchar('\n');
	}
}
