#include <unistd.h>

/**
 * main - entry point
 * description - prints puchar using putchar
 * return - always 0
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}
