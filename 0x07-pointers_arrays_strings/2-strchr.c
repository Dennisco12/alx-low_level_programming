#include "main.h"

/**
 * _strchr - A function that locates a char in a string
 * @s: the string
 * @c: the char
 * Return: the string if char is present or null if char is not present
 */

char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}
	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return (0);
}
