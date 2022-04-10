#include <stdlib.h>
#include <stdio.h>
/**
 * This is where the headers end
 * return: 0
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
