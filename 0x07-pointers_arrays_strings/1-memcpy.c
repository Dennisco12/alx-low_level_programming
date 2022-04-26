#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @n: the number of bytes
 * @src: source memory area
 * @dest: destination memory area
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
