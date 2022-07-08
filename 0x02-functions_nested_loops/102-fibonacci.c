#include "main.h"

/**
 * main - prints first 50 fibonaacci numbers
 * return: 0
 */

int main()
{
	int i = 0;
	int arr[50];

	arr[0] = 1;
	arr[1] = 2;

	_putchar(arr[0] + '0');
	_putchar(arr[1] + '0');

	i = 2;
	while (i < 50)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
		i++;
		_putchar(arr[i] + '0');
		_putchar(',');
		_putchar(' ');
	}
	return (0);
}
