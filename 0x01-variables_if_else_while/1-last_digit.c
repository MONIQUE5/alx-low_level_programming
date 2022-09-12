#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - returns 0 if program ran normally
 *
 * printf: prints last digit of n
 *
 * Return: always returns 0 if successful
 *
 *
 */

int main(void) /* returns 0 if program run normally */
{
int n, Lastdigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
Lastdigit = n % 10;
if (Lastdigit > 5)
{
printf("Last digit of %d", n);
printf(" is %d and is greater than 5\n", Lastdigit);
}
else if (Lastdigit == 0)
{
printf("Last digit of %d", n);
printf(" is %d and is 0\n", Lastdigit);
}
else
{
printf("Last digit of %d", n);
printf(" is %d and is less than 6 and not 0\n", Lastdigit);
}
return (0);
}
