#include <stdio.h>

/**
 * main - A function that prints the sum of positive integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n, sum;

	sum = 0;

	for (n = 1; n < argc; n++)
	{
		if (atoi(argv[n]) > 1)
		{
			sum += atoi(argv[n]);
		}
		else if (argc == 1)
			printf("0\n");
	}
	printf("%d\n", sum);
	return (1);
}
