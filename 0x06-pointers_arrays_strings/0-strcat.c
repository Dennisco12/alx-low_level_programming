#include "main.h"

/**
 * _strcat - function that appends a atring to another string
 * @dest: The string to be appended to
 * @src: the string that will be appended
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0; 
	while (dest[i])
	{
		for (dest[i] = '\0'; i++)
			continue;
	}
	{
		j = 0;
		while (src[j])
			j++;
		_putchar (dest[i]);
		_putchar (src[j]);
	}
	return (dest);
}
