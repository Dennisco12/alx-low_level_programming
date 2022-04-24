#include "main.h"

/**
 * -strcmp - A function that compares two strings
 *  @s1: first string
 *  @s2: second string
 *  Return: dest
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	j = 0;

	while (i == 0)
	{
		if ((s1[j] == '\0') && (s2[j] == '\0'))
			break;
		i = s1[j] - s2[j];
		j++;

	}
	return (i);
}
