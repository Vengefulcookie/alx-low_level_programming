#include "main.h"

/**
 * _strchr - entry point function
 *
 * @s: input
 * @c: input
 *
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int m = 0;

	for (; s[m] >= '\0'; i++)
	{
		if (s[m] == c)
		{
			return (&s[m]);
		}
	}
	return (0);
}
