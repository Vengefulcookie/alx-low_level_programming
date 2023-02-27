#include "main.h"

/**
 * _strlen - function returns length of string
 *
 * str: My first strlen
 * @s: to be checked
 *
 * Return: always 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	i++;

	return (i);
}
