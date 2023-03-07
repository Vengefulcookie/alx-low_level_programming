#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @dest: memory stored in
 * @src: memory copied in
 * *@n: bytes number
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;
	int i = n;

	for (; m < i; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);
}
