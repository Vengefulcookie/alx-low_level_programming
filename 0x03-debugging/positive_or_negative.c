#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - function checks for positive or negative of number
 *
 * @i: to be checked
 *
 * Return: always 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
