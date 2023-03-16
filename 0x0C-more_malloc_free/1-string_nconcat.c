#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: to be checked
 *
 * Return: NULL if function fails
 * return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int size1 = 0;
	unsigned int size2 = 0;
	unsigned int i;
	unsigned int j;

	while (s1 && s1[size1])
		size1++;
	while (s2 && s2[size2])
		size2++;

	if (n < size2)
		m = malloc(sizeof(char) * (size1 + n + 1));
	else
		m = malloc(sizeof(char) * (size1 + size2 + 1));

	if (!m)
		return (NULL);
	while (i < size1)
	{
		m[i] = s1[i];
		i++;
	}
	while (n > size2 && i < (size1 + size2))
	{
		m[i++] = s2[j++];
	}
	m[i] = '\0';
	return (m);
}
