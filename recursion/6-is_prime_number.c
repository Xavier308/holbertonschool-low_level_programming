#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: 1 if the number is prime, 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}

/**
 * check_prime - Checks for primality by testing divisibility.
 * @n: The number to check.
 * @i: The divisor to test.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int check_prime(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}

