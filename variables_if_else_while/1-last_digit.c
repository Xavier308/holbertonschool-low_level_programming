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

srand(time(0));
n = rand() - RAND_MAX / 2;

/* your code goes there */
if (n > 5)
{
printf("Last digit of %d and is greater than 5\n", n);
}
else if (n == 0)
{

printf("Last digit of %d and is 0\n", n);

}

else
{
printf("Last digit of %d and is less than 6 and\n", n);
}

return (0);
}
