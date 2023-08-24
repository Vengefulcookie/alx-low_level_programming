#include "main.h"
#include <stdlib.h>

/**
 * count_w - function to count number of words
 *
 * @s: string to be checked
 *
 * Return: number of words
 */

int count_w(char *s)
{
	int f, g, h;

	f = 0;
	h = 0;

	for (g = 0; s[g] != '\0'; g++)
	{
		if (s[g] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			h++;
		}
	}

	return (h);
}

/**
 * **strtow - function that splits a string into words
 *
 * @str: string to be split
 *
 * Return: NULL if str == NULL or str == ""
 * or if it fails, return NULL
 */

char **strtow(char *str)
{
	char **matrix, *temp;
	int l, m = 0, len = 0, words, g = 0, start, end;

	while (*(str + len))
		len++;
	if (words == 0)
		return (NULL);

	matrix = (char **)malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (l = 0; l <= len; l++)
	{
		if (str[l] == ' ' || str[l] == '\0')
		{
			if (g)
			{
				end = l;
				temp = (char *)malloc(sizeof(char) * (g + 1));
				if (temp == NULL)
					return (NULL);
				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				matrix[m] = temp - g;
				m++;
				g = 0;
			}
		}
		else if (g++ == 0)
			start = l;
	}
	matrix[m] = NULL;

	return (matrix);
}
