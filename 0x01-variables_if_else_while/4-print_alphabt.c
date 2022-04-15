#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: print the alphabet except e and q
 * Return: always 0
 */

int main(void)
{
char d;

for (d = 'a'; d <= 'z'; d++)
{
if (d == 'q')
continue;

else if (d == 'e')
continue;

putchar (d);
}

putchar ('\n');
return (0);
}
