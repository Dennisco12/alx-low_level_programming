#include "main.h"                                                                                               /**
 * _strncat -  a function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: max size
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
        int i, j;

        /**
         * declare i as the number of elements in string dest
         */                                                     i = 0;                                                  while (dest[i])
                i++;

        for (j = 0; j < n && src[j] != '\0'; j++)
        {
                dest[i + j] = src[j];
        }
        dest[i + j] = '\0';
        return (dest);                                  }
