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
	int (*adrs)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("error\n");
		return (2);
	}


	for (i = 0; i < bytes; i++)
	{
		opcode = *(unsigned char *)adrs;
		printf("%02x", opcode);

		if (i == bytes - 1)
			continue;
		printf(" ");

		adrs++;
	}

	printf("\n");

	return (0);
}
