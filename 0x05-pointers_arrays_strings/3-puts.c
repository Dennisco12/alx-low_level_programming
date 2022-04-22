#include "main.h"

/**
 * _puts - function that prints a string to stdout
 * @str: input string
 * Return: 0
 */

void _puts(char *str)
{
	int a;

	a = 0;
	while (str[a])
	{
		_putchar (str[a]);
		a++;
	}
	_putchar ('\n');
}
