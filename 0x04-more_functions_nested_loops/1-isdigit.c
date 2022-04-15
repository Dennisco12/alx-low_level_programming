#include "main.h"

/**
 * _isdigit - entry point
 * @c: input value
 * Return: 1 if input is a digit, 0 if otherwise
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
