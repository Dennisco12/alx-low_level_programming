#include "main.h"

/**
 * rot13 - A function that encodes a string into rot13
 * @str: The source string
 * Return: str
 */

char *rot13(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 90 && str[i] >= 65) || (str[i] <= 122 && str[i] >= 97))
		{
			str[i] = str[i] - 13;
			break;
		}
	}
	i++;
	return (str13);
}
