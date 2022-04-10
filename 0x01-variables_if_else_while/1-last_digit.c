#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes here */

/**
 * main - entry point 
 *
 * Description: prints a number and its last digit along
 * with whether its last digit is 0, greater than 5 or l * ess than 6 and not 0
 */
int main(void)
{
       int n;
       int last_digit;

       srand(time(0));
       n = rand() - RAND_MAX / 2;
       last_digit = n % 10;

       if (last_digit > 5)
       printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
       else if (last_digit == 0)
       printf("Last digit of %d is %d and is 0\n", n, last_digit);
       else
       printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
       return (0);
}
