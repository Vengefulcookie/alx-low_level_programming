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
	int m;
	int n;
	int i;

	m = 0;

	while
	(str[m] != '\0');
	{
		m++;
	}

	if (m % 2 == 0)
	{
		for (i = m / 2; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}
	}
	else if (m % 2)
	{
		for (n = (m - 1) / 2; n < m - 1; i++)
		{
			putchar(str[n + 1]);
		}
	}
	putchar('\n');
}
