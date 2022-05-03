#include "main.h"

/**
 * _atoi - A function that converts a string into an integer
 * @s: input string
 * Return: 0
 */

int _atoi(char *s)
{
	int i, j, n, x;
	
	i = x = 1;
	while ((s[i] < '0' || s[i] > '9') && (s[i] != '\0'))
	{
		if (s[i] == '-')
			x *= -1;
		i++;
	}
	j = i;
	while ((s[j] >= '0') && (s[j] <= '9'))
	{
		n = (n * 10) + x * ((s[j]) - (s[j]));
		j++;
	}
	return (n);
}
