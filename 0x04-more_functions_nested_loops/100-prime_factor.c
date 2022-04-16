#include <stdio.h>
#include <stdlib.h>


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
