#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main: entry point
 *
 * description: The function prints all the letters in
 * the alphabet.
 * return: 0
 */

int main(void)
{
	int d = 'a';
	for (d = 0; d < 26; d++)
	putchar('a' + d);
	putchar('\n');

	return (0);
}
