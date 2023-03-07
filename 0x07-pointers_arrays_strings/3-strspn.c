#include "main.h"

/**
 * _strspn - function gets length of a prefix substring
 * @s: to be checked
 * @accept: to be checked
 *
 * Return: always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
			{
				n++;
				break;
			}
			else if (accept[m + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
