#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function that prints the product of two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int mul;

	int p, q;

	p = atoi(argv[1]);
	q = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	if (argc == 3)
	{
		mul = p * q;
		printf("%d\n", mul);
		return (0);
	}

	printf("Error\n");
	return (1);
}
