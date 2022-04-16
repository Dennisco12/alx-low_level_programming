#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - universal entry points
 *
 * description: prints all digits in base 10 using only the putchar function.
 * Return: Always 0
 */

int main(void)

{
int d = '0';
for (d = '0'; d <= '9'; d++)

putchar(d);

putchar('\n');
return (0);
}
