#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * description: prints the alphabets in lowercase
 *
 * Return: 0
 */

int main(void)
/*
 * main: entry point
 */
{
	int d = 'a';
	int e = 'A';

	for (d = 0; d < 26; d++)
	putchar('a' + d);
	for (e = 0; e < 26; e++)
	putchar ('A' + e);

	putchar('\n');

	return (0);
}
