#include "main.h"

/**
 * _length - size of string
 * @s: Pointer to string
 * Return: length
 */

int _length(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _length(++s));
}

/**
 * p1 - palindrome function
 * @s: pointer to string
 * @l: position
 * Return: complicated
 */

int p1(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}

	if (*s == *(s + 1))
	{
		return (p1(s + 1, l - 2));
	}
	return (0);
}

/**
 * is_palindrome - palindrome itself
 * @s: pointer to string
 * Return: recursive value
 */

int is_palindrome(char *s)
{
	int len = _length(s);

	return (p1(s, len - 1));
}
