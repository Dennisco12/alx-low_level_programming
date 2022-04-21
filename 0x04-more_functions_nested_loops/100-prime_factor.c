#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * description: the code prints the largest prime factor of i
 * Return: always 0
 */

int main(void)
{
	unsigned long i, j, count;

	i = 612852475143;

	count = 1;

	for (j = 3; j <= i; j += 2)
	{
		while (i % j == 0)
		{
			count = i;
			i = i / j;
		}
	}
	printf("%lu\n", count);
	return (0);
}
