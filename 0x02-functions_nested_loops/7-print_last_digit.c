#include "main.h"

/**
 * print_last_digit - function prints the last digit of a number
 *
 * @r: to be checked
 *
 * Return: always s
 */

int print_last_digit(int r)
{
	int s;

	s = r % 10;
	if (r < 0)
		s = -s;
	return (s);
}
