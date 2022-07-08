#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, j = 0, k = 0, m = 2;

	printf("Enter a value: ");
	scanf("%d", &n);

	k = k + (n % 10);
	n = n / 10;
	while (j < 50)
	{
		if (n != 1 && n != 0)
			return (0);
		else
		{
			k = k + ((n % 10) * m);
			n = n / 10;
			m = m * 2;
			j++;
		}
	}
	printf("%d\n", k);
	return (k);
}
