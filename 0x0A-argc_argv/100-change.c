#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of cents to give back
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 or 1
 */

int main(int argc, char *argv[])
{
	int cent, div, count, change;
	int coins[] = {25, 10, 5, 2, 1};

	change = cent = div = count = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);
	if (cent <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (coins[count] != '\0')
	{
		if (cent >= coins[count])
		{
			div = cent / coins[count];
			change += div;
			cent -= (div * coins[count]);
		}
		count++;
	}
	printf("%d\n", change);
	return (0);
}
