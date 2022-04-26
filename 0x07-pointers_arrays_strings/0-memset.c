#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: the string
 * @n: the number of bytes
 * @b: the constant byte
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
