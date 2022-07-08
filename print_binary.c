#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - convert an unsigned int to binary
 * @n: the number to be converted
 * Return: length
 */

int main()
{
	unsigned long int i = 0;
	int k = 1, n;

	printf("Enter a value: ");
	scanf("%d", &n);

	while (n != 0)
	{
		i = i + (n % 2) * k;
		n = n / 2;
		k = k * 10;
	}
	printf("%lu\n", i);
	return (i);
}
