#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, j = 0, k = 1;

	printf("Enter a value: ");
	scanf("%d", &n);

	while (n != 0)
	{
		if (n / 100 != 0)
		{
			j = j + (n / 100) * 16 * 16;
			n = n % 100;
		}
		else if ((n / 100 == 0) && (n / 10 != 0))
		{
			j = j + (n % 100) * 16;
			n = n % 10;
		}
		else if ((n % 1000 == 0) && (n % 100 == 0) && (n % 10 != 0))
		{
			j = j + (n / 10)
