#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
	int d = '0';
	int e = 'a';

	for (d = 0; d <= 9; d++)
	putchar ('0' + d);

	for (e = 0; e <= 5; e++)
	putchar ('a' + e);

	putchar ('\n');
		return (0);
}
