#include "main.h"

/**
 * _strlen - prints the length of a string
 * return: 0
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		_putchar (i);
	}
	_putchar ('\n');
	return (0);
}
