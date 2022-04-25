#include "main.h"

/**
 * leet - a function that encodea a string
 * @str: the source string
 * Return: the dest string
 */

char *leet(char *str)
{
	int n, i;
	int upp[] = {65, 69, 79, 84, 76};
	int low[] = {97, 101, 111, 116, 108};
	int num[] = {52, 51, 48, 55, 49};

	n = 0;
	while (str[n] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (str[n] == upp[i] || str[n] == low[i])
			str[n] = num[i];
			break;
		}
	}
	n++;
	return (str[n]);
}
