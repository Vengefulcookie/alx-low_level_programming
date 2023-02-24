#include "main.h"

/**
 * more_numbers - function prints 10 times the numbers
 *
 * Return: always 0
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			if (j >= 10)
				putchar('1');
			putchar (j % 10 + '0');
		}
		putchar('\n');
	}
}
