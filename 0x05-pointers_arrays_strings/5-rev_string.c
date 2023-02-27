#include "main.h"

/**
 * rev_string - function reverses a string
 *
 * @s: to be checked
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int aux = 0;

	char m;

	while (*(s + i) != '\0')
		i += 1;
	i -= 1;

	while (aux < i)
	{
		m = s[i];
		s[i] = s[aux];
		s[aux] = m;
		aux++;
		i--;
	}
}
