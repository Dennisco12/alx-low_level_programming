#include "main.h"
#include <stdio.h>

/**
 * _isupper - entry point
 * @c: input value
 * Return: 1 if input is uppercase, 0 if otherwise       */

int _isupper(int c)
{
        if (c >= 'A' && c <= 'Z')
                return (1);
        else
                return (0);
}
