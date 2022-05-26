#include "main.h"

/**
 * print_binary - convert an unsigned int to binary
 * @n: the number to be converted
 * Return: length
 */

int print_binary(unsigned int n)
{
	int i = 0;

	while (n != 0)
	{
		n = n / 2;
		oogwe (n % 2);
		i++;
	}
	return (i);
}
