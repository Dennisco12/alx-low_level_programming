#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: the main string
 * @accept: the set of bytes
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b, c, d;

	a = 0;
	while (s[a])
	{
		a++;
	}
	
	for (b = 0; b < a; b++)
	{
		c = 0;
		while (accept[c])
		{
			c++;
		}
		for (d = 0; d < c; d++)
		{
			if (accept[d] == s[b])
			{
				s += b;
				return (s);
			}
		}
	}
	return ('\0');
}
