#include "main.h"                                                                                               /**                                                      * _strcpy - A function that copies a string into another string
 * @dest: first string
 * @src: second string
 * Return: a pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
        int d;

        d = 0;
        while (src[d])
        {
                dest[d] = src[d];
                d++;
        }
        dest[d] = '\0';
        return (dest);
}
