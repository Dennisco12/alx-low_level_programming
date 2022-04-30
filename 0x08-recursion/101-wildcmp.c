#include "main.h"

/**
 * wildcmp - A function that checks for identical strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if string is identical, else return 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (1);
	
	else
		return (0);

	return (wildcmp(*(s + 1), *(s + 1)));
}
