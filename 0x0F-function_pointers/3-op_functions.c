#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - calculates the sum of two ints
 * @a: the first int
 * @b: the second int
 * Return: the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calc the difference
 * @a: first int
 * @b: second int
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiples two int
 * @a: first int
 * @b: second int
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two int
 * @a: first int
 * @b: second int
 * Return: quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo of two int
 * @a: first int
 * @b: second int
 * Return: modulo
 */
int op_mod(int a, int b)
{
	return (a % b);
}
