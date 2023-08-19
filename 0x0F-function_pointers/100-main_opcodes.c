#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the
 * opcodes of its own main function
 *
 * @argc: indicates how many arguments were
 * entered when the program started
 * @argv: is an array of pointers to arrays of
 * character objects
 *
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	char *arr;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("error\n");
		exit (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("error\n");
		exit (2);
	}

	arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		opcode = *(unsigned char *)arr;
		printf("%02x", opcode);

		if (i == (bytes - 1))
			continue;
		printf(" ");

		arr++;
	}

	printf("\n");

	return (0);
}
