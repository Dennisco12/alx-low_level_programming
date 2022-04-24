#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - a function that generates a random key
 * Return: always 0
 */

int main(void)
{
	char a[100];
	int i, n, r;

	i = 0;
	n = 0;

	srand(time(NULL));
	while (n < 2645)
	{
		r = rand() % 122;
		if (r > 32)
		{
			a[i++] = r;
			n += r;
		}
	}
	a[i++] = (2772 - n);
	a[i] = '\0';
	printf("%s\n", a);

	return (0);
}
