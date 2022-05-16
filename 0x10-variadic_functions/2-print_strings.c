#include <stdarg.h>
#include "variadic_functions"
#include <stdio.h>

/**
 * print_strings - a function that prints strings followed by a new line
 * @seperator: the string seperator
 * @n: number of strings passed through
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list elem;
	unsigned int i;
	char *str;

	va_start(elem, n);

	i = 0;
	while (str[i] != seperator && str[i] != '\0')
	{
		printf("%s", va_arg())
