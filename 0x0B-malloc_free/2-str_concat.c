#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 *
 * @s1: first input
 * @s2: second input
 *
 * Return: NULL if fails, concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *cat;
	int m;
	int n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	n = m = 0;
	while (s1[m] != '\0')
		m++;
	while (s2[n] != '\0')
		n++;
	cat = malloc(sizeof(char) * (m + n + 1));
	if (cat == NULL)
		return (NULL);
	m = n = 0;
	while (s1[m] != '\0')
	{
		cat[m] = s1[m];
		m++;
	}

	while (s2[n] != '\0')
	{
		cat[m] = s2[n];
		m++, n++;
	}
	cat[m] = '\0';
	return (cat);
}
