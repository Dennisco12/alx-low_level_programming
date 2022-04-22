#include "main.h"

/**
 * _strcpy - function that copies a string to a buffer
 * @dest: input string
 * @src: input string
 * return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
