#include "main.h"
#include <stdio.h>

/**
 * real_prime_number- recursive function that determines
 * the actual prime numbers
 *
 * @n: value to be checked
 * @g: a guess value/placeholder
 *
 * Return: 1 if the number is a prime number
 * otherwise return 0.
 */

int real_prime_number(int n, int g)
{
	if (g == 1)
	{
		return (1);
	}
	if ((n % g == 0) && (g > 0))
	{
		return (0);
	}
	return (real_prime_number(n, g - 1));
}

/**
 * is_prime_number- function that returns 1 if
 * input integer is a prime number
 * real_prime_number- recursive function that determines
 * the actual prime numbers
 *
 * @n: integer to be checked
 *
 * Return: 1 if number is a prime number
 * otherwise return 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (real_prime_number(n, n - 1));
}
