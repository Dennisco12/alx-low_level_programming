#include "main.h"

/**
 * main - all entry point
 * print_alphabet_x10: prints alphabets in lower case 10 times
 * Return: always 0
 */

void print_alphabet_x10(void)
{
int d, f;

d = 0;
while (d < 10)
{
for (f = 'a'; f <= 'z'; f++)
{
_putchar (f);
}
d++;
_putchar ('\n');
}
}
