#include "main.h"

/**
 * _strstr - A function that locates a substring
 * @haystack: the main string
 * @needle: the string to be located
 * Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	i = 0;
	while (haystack[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		k = 0;
		while (needle[k] != '\0')
			k++;
		if (needle[k] == haystack[j])
		{
			haystack += j;
			return (haystack);
		}
	}
	return (0);
}
