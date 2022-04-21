#include "main.h"

/**
 * rev_string - a function that reverses the elements of a string
 * return: 0
 */

void rev_string(char *s)
{
	int j, i;
	
	j = 0;
	while (s[j])
		j++;
	for (i = j; i >= 0; i--)
	{
		_putchar (s[i]);
	}
	_putchar ('\n');
	return;
}
