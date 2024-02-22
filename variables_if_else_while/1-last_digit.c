#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints a random number and states whether
 * it is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int lastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = abs(n % 10); /* abs(n % 10)) is used for manage negative numbers */

/* Snippet of code for evaluate lastDigit of n */
if (lastDigit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
}

else if (lastDigit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastDigit);
}

else
{
printf("Last digit of %d is %d and is less than 6 and is not 0\n", n, lastDigit);
}

return (0);
}
