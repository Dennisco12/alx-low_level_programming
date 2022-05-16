#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * void print_name - A function that prints the name inputted to it
 *
 * @name: the input name
 * @f: a pointer function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
