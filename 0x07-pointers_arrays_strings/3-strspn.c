#include "main.h"

/**
 * _strspn - A function that prints the length of a prefix substring
 * @s: The main string
 * @accept: The length of the prefix
 * Return: the length
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;

	count = 0;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
			j++;
		}

		if (accept[j] != s[i])
		{
			break;
		}
		i++;
	}
	return (count);
}
