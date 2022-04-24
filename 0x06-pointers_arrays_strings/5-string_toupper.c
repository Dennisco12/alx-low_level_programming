#include "main.h"

/**
 * string_toupper - A function that converts lowercase letters to uppercase
 * @d: the atring in lowercase
 * Return: the string
 */

char *string_toupper(char *d)
{
	int n;

	n = 0;
	while (d[n] != '\0')
	{
		if (d[n] >= 97 && d[n] <= 122)
		{
			d[n] = d[n] - 32;
		}
		n++;
	}
	return (d);
}
