#include "main.h"

/**
 * _puts - function prints a string
 *
 * @str: "I do not fear computers. I fear the lack of them - Isaac Asimov"
 *
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
