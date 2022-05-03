#include "main.h"

/**                                                      * _strlen - a function that prints the length of a string                                                       * @s: input variable
 * Return: 0
 */

int _strlen(char *s)
{
        int n;

        n = 0;
        while (s[n])
                n++;
        return (n);
}
