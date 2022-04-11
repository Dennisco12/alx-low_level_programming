#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main: all entry goes here
 * description: prints out the alphabet but in a reversed order
 *
 * return: (0)
 */

int main(void)
{
	int d;

	for (d = 'z'; d >= 'a'; d--)
	putchar ('z' + d);

	putchar ('\n');
	return (0);
}
