#include "main.h"

/**
 * cap_string - A function that capitalizes the first letter of every word
 * @str: the source string
 * Return: str
 */

char *cap_string(char *str)
{
	int n, i;
	int word_sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	n = 0;
	if (str[n] >= 97 && str[n] <= 122)
		{
			str[n] = str[n] - 32;
		}
	n++;
	while (str[n] != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (str[n] == word_sep[i])
			{
				if (str[n + 1] >= 97 && str[n + 1] <= 122)
				{
					str[n + 1] = str[n + 1] - 32;
				}
				break;
			}
		}
		n++;
	}
	return (str);
}
