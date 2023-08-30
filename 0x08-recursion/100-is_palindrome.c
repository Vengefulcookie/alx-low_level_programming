#include "main.h"

int see_drom(char *s, int m, int ab);
int strab_recursion(char *s);

/**
 * is_palindrome - function used to check if string is
 * empty
 *
 * @s: string
 *
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (see_drom(s, 0, strab_recursion(s)));

}

/**
 * strab_recursion - returns length of string
 *
 * @s: string
 *
 * Return: string length
 */

int strab_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + strab_recursion(s + 1));
}

/**
 * see_drom - checks recursively for palindrome
 *
 * @s: string
 * @i: iterator
 * @m: length of string
 *
 * Return: 1 if it is empty, 0 if not
 */

int see_drom(char *s, int i, int m)
{
	if (*(s + i) != *(s + m - 1))
	{
		return (0);
	}
	if (i >= m)
	{
		return (1);
	}
	return (see_drom(s, i + 1, m - 1));
}
