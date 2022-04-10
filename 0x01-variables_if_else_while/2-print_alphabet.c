#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main: all other headers go here
 * description: The function prints all the letters in
 * the alphabet.
 * return: 0
 */

int main(void)
{
	char d = 'a';
	for (d = 'a'; d <= 'z'; d++) {
	putchar("%c\n" d);
	}

	return (0);
}
