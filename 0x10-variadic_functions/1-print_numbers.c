#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @seperator: string to be printed between two numbers
 * @n: number of integers passed to the function
 * Return: nothing
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list elem;
	unsigned int i;

	va_start(elem, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(elem, int));

		if (seperator && i < n - 1)
		{
			printf("%s", seperator);
		}
	}
	printf("\n");
	va_end(elem);
}
