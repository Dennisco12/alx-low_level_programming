#include "main.h"
                                                        /**
 * _islower - entry point
 * @l: single letter input
 * Return: return 1 if lowercase, return 1 if otherwise
 */

int _islower(int l)
{
        if (l >= 'a' && l <= 'z')
                return (1);
        else
                return (0);
}
