#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - performs simple arithmetic operations
 * @argc: argument count
 * @argv: argument vector
 * Return: operation
 */

int main(int argc, char *argv[])
{
	int ans, op1, op2;
	int (*oper)(int, int);
	char sign;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oper = get_op_func(argv[2]);

	if (!oper)
	{
		printf("Error\n");
		exit(99);
	}

	op1 = atoi(argv[1]);
	op2 = atoi(argv[3]);

	sign = *argv[2];

	if ((sign == '/' || sign == '%') && op2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	ans = oper(op1, op2);

	printf("%d\n", ans);
	return (0);
}
