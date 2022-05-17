#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - a function that prints strings followed by a new line
 * @separator: the string seperator
 * @n: number of strings passed through
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list elem;
	unsigned int i;
	char *str;

	va_start(elem, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(elem, char *);

		if (!str)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(elem);
}
