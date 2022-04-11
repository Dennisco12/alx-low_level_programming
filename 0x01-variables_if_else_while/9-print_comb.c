#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** main - this is the entry point
 *
 * description - prints all possible combination of a si
 * ngle digit
 * return - always (0)
 */

int main(void)
{
	int d = 0;

	while (d < 10)

	{
		putchar (48 + d);
		if (d != 9)
		{
			putchar (',');
			putchar (' ');
		}
		d++;
	}

	putchar ('\n');
	return (0);
}
