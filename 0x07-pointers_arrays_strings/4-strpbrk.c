#include "main.h"

/**
 * *_strpbrk - function searches string for any of a set of bytes
 * @s: to be checked
 * @accept: to be checked
 *
 * Return: always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
		if (*s == accept[m])
		return (s);
		}
	s++;
	}
	return ('\0');
}
