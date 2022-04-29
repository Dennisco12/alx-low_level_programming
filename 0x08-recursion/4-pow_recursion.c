#include "main.h"

/**
 * _pow_recursion - A function that prints the power of another number
 * @x: The integer
 * @y: The power
 * Return: -1 if y is negative and the power if otherwise
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
