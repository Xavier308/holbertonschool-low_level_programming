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
int last_n;

srand(time(0));
n = rand() - RAND_MAX / 2;
last_n = n % 10;

/* Snippet of code for evaluate lastDigit of n */
if (last_n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, last_n);
}

else if (last_n == 0)
{
printf("Last digit of %d is %d and is 0\n", n, last_n);
}

else
{
printf("Last digit of %d is %d and is less than 6 and is not 0\n", n, last_n);
}

return (0);
}
