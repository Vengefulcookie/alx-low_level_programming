#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function returns a pointer
 * to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 *
 * @str: string to be used
 *
 * Return:NULL if str = NULL, or insufficient memory'
 * a pointer to the duplicated string if successful
 */

char *_strdup(char *str)
{
	char *ptr;
	int m, n = 0;

	if (str == NULL)
		return (NULL);
	m = 0;
	while (str[m] != '\0')
		m++;

	ptr = malloc(sizeof(char) * (m + 1));

	if (ptr == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		ptr[n] = str[n];

	return (ptr);
}
