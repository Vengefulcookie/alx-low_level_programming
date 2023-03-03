#include "main.h"

/**
 * *_strncpy - function that copies a string
 *
 * @src: to be checked
 * @dest: to be checked
 * @n: to be checked
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		j++;
	}
	putchar('\n');
	return (dest);
}
