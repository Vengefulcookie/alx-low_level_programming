#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments
 *
 * @ac: integer input
 * @av: double pointer (array)
 *
 * Return: pointer to new string,
 * or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int l, m, n = 0, o = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (l = 0; l < ac; l++)
	{
		for (m = 0; av[l][m]; m++)
			o++;
	}

	o += ac;

	str = malloc(sizeof(char) * o + 1);
	if (str == NULL)
		return (NULL);

	for (l = 0; l < ac; l++)
	{
		for (m = 0; av[l][m]; m++)
		{
			str[n] = av[l][m];
			n++;
		}
		if (str[n] == '\0')
		{
			str[n++] = '\n';
		}
	}

	return (str);
}
