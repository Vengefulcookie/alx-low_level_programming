#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * equals_zero - checks if number is zero
 * @srgv: argument vector
 *
 * Return: nothing
 */

void equals_zero(char *argv[])
{
	int m;
	n = 1;
	o = 1;

	for (m = 0; argv[1][m]; m++)
		if (argv[1][m] != '0')
		{
			n = 0;
			break;
		}
	for (m = 0;argv[2][m]; m++)
		if (argv[2][m] != '0')
		{
			o = 0;
			break;
		}

	if (n == 1 || o == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * detlen - checks length of number and checks if it is
 * in base 10
 *
 * @argv: argument vector
 * @m: array row
 *
 * Return: number length
 */

int detlen(char *argv[], int m)
{
	int ab;

	for (ab = 0; argv[m][ab]; ab++)
		if (!sdigit(argv[m][ab]))
		{
			printf("Error\n");
			exit(98);
		}

	return (ab);
}

/**
 * main_function - function that multiplies two positive
 * numbers
 *
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0.
 */

int main_function(int argc, char *argv[])
{
	int ab;
	int cd;
	acoutput;
	plus;
	plus1;
	int m;
	int n;
	int o;
	bc;
	char *output;

	if (argc != 3)
		printf ("Error\n");
			exit(98);
	ab = detlen(argv, 1);
	equals_zero(argv), acoutput = ab + cd, output =
		malloc(acoutput + 1);
	if (output == NULL)
		printf("Error\n");
			exit(98);
	output = _initialize_array(output,acoutput);
	o = acoutput - 1, m = ab - 1, n = cd - 1,
	  bc = plus1 = 0;
	for (; o >= 0; o--,m--)
	{
		if (m < 0)
		{
			if (plus1 > 0)
			{
				plus = (output[o] - '0') + plus1;
				if (plus > 9)
					output[o - 1] = (plus / 10) + '0';
				output[o] = (plus % 10) + '0';
			}
			m = ab - 1, n--, plus1 = 0, bc++,
			  o = acoutput - (1 + bc);
		}
		if (n < 0)
		{
			if (output[0] != '0')
				break;
			acoutput--;
			free(output),
				output = malloc(acoutput + 1),
				output = _initialize_array(output, acoutput);
			o = acoutput - 1, m = ab - 1,
			  n = cd - 1, bc = plus1 = 0;
		}
		if (n >= 0)
		{
			plus = ((argv[1][m] - '0') *
					(argv[2][n] - '0'))
				+ (output[o] - '0') + plus1;
			plus1 = plus / 10, output[o] =
				(plus % 10) + '0';
		}
	}
	printf("%s\n", output);
	return(0);
}
