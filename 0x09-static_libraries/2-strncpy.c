#include "main.h"

/**
 * _strncpy - a function that copies a string into another string
 * @dest: destination string
 * @src: source string
 * @n: number of char to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
        int i;                                                                                                          i = 0;                                                  while (dest[i])                                         i++;                                            
        for (i = 0; i < n && src[i] != '\0'; i++)
                dest[i] = src[i];
        for ( ; i < n; i++)
        dest[i] = '\0';

        return (dest);
}
