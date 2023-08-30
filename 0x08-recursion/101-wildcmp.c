#include "main.h"
#include <stdio.h>

/**
 * wildcmp- function that compares two strings
 * to check if they are identical or not
 *
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: 1 if string is identical
 * otherwise return 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1,
					s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
