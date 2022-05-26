#include "main.h"

/**
 * _strlen_recursion - Afunction that returns the length of a string
 * @s: The input string
 * Return: the length of string
 */

int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (i + _strlen_recursion(s + 1));
	}
}
