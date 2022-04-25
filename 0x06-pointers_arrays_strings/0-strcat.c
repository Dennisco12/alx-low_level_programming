#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;

	for (j = 0; src[j]; j++)
	{
		dest[i++] = src[j];
	}
	return (dest);
}
