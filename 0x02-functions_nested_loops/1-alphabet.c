#include "main.h"

/**
 * print_alphabet - all entry points
 *
 * description - prints alphabet in lowercase
 *
 * Return: 0 for success
 */

void print_alphabet(void)

{
	char d;

	for (d = 'a'; d <= 'z'; d++)
		_putchar(d);

	_putchar('\n');

}
