#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat- function that concatenates
 * two string
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatnate the two strings
 *
 * Return: if function fails, return NULL
 * returned pointer should point to the newly
 * allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int j;
	unsigned int k;
	unsigned int l;
	unsigned int m;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (j = 0; s1[j] != '\0'; j++)
		;

	for (k = 0; s2[k] != '\0'; k++)
		;

	if (n > k)
		n = k;

	l = j + n;

	cat = malloc(l + 1);

	if (cat == NULL)
		return (NULL);

	for (m = 0; m < l; m++)
		if (m < j)
			cat[m] = s1[m];
		else
			cat[m] = s2[m - j];

	cat[m] = '\0';

	return (cat);
}
