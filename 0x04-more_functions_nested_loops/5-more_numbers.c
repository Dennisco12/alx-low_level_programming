#include "main.h"

/**
 * more_numbers - entry point
 * Return: always 0
 */

void more_numbers(void)
{
	int i, a, j;

	for (a = 0; a < 10; a++)
	{
		for (i = 0; i <= 1; i++)
		{
			for (j = 0; j <= 9; j++)
			{
				if (!(i == 1 && j >= 5))
				{
					if (i)
						_putchar (i + '0');
					_putchar (j + '0');
				}
			}
		}
		_putchar ('\n');
	}
}
