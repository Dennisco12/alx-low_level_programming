#include "main.h"

/**
 * rot13 - A function that encodes a string into rot13
 * @str: The source string
 * Return: str
 */

char *rot13(char *str)
{
	int i, j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = rot13[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
