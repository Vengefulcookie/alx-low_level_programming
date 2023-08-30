#include "main.h"

/**
 * _memset - inserts a block of memory with a specific value
 * @s: address of memory to be checked
 * @b: the value wanted
 * @n: number of bytes
 *
 * Return: changed array with new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

