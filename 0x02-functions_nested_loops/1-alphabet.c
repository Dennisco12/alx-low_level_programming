#include "main.h"

/**
 * main - all entry points
 *
 * description - prints alphabet in lowercase
 *
 * return - 0 for success
 */

void print_alphabet(void)

{
	char d;

	for (d = 'a'; d <= 'z'; d++)
		_putchar(d);

	_putchar('\n');

}
