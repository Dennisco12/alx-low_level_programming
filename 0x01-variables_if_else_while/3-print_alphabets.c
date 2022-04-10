#include <stdlib.h>
#include <stdio.h>
/*main: entry point
 *
 *description: print lowercase then uppercase alphabet
 *return: (0)
 */

int main()
{
	int d = 'a';
	int e = 'A';

	for (d = 0; d < 26; d++)
	putchar('a' + d);
	for (e =0; e < 26; e++)
	putchar ('A' + e);

	putchar('\n');

	return (0);
}
