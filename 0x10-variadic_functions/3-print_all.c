#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - Afunction that prints anything
 * @format: A list of types of arguments passed to the function
 * Return: nothinig
 */

void print_all(const char * const format, ...)
{
	va_list elem;
	unsigned int i, j, c = 0;
	char *strg;
	const char *cons = "cifs";

	va_start(elem, format);

	i = 0;
	while (format[i] && format)
	{
		j = 0;
		while (cons[j])
		{
			if (format[i] == cons[j] && c)
			{
				printf(", ");
				break;
			}
			j++;
		}

		switch (format[i])
		{
			case 'c':
			{
				printf("%c", va_arg(elem, int)), c = 1;
				break;
			}

			case 'i':
			{
				printf("%d", va_arg(elem, int)), c = 1;
				break;
			}

			case 'f':
			{
				printf("%f", va_arg(elem, double)), c = 1;
				break;
			}

			case 's':
			{
				strg = va_arg(elem, char *), c = 1;
				if (!strg)
				{
					printf("(nil)");
					break;
				}
				printf("%s", strg);
				break;
			}
		}
		i++;
	}
	printf("\n");
	va_end(elem);
}
