#include "main.h"

/**
 * puts_half - function prints second half of the string
 *
 * if number of characters is odd, character should print last n
 * characters of string where n = (length_of_the_string - 1) / 2
 *
 * @str: pointer to the string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int n = 0;

	while (str[i] != '\0');
		i += 1;
	n = i / 2;

	if (i % 2 == 1)
		n += 1;
	while (str[n] != '\0')
	{
		putchar(*(str + n));
		n++;
	}
	putchar('\n');
}
