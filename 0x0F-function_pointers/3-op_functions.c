#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns sum of two numbers
 *
 * @a: first number
 * @b second number
 *
 * Return: sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Retrun: difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns product of two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the division of two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: the division result of a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division fo two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: the remainder of divison a and b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
