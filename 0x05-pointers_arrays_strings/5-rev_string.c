#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: input string
 * Return: 0
 */

void rev_string(char *s)
{
	int i, j;
	char a[500];

	i = 0;
	j = 0;

	while (*(s + i))
	{
		*(a + i) = *(s + i);
		i++;
	}

	i = i - 1;
	while (i >= 0)
	{
		s[i] = a[j];
		i--;
		j++;
	}
}
