#include "3-calc.h"

/**
 * op_add - calculates sum of two integers
 * @a: integer one
 * @b: integer two
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates difference of two integers
 * @a: integer one
 * @b: integer two
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates product of two integers
 * @a: integer one
 * @b: integer two
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates division of two integers
 * @a: integer one
 * @b: integer two
 *
 * Return: result of division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates remainder of the division of two integers
 * @a: integer one
 * @b: integer two
 *
 * Return: remainder of the division of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
