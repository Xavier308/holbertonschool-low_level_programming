#include "main.h"

int find_sqrt(int num, int root);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of n. If n does not have a
 * natural square root, the function returns -1.
 */
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 0));
}

/**
 * find_sqrt - Finds the natural square root of a number.
 * @num: The number to find the square root of.
 * @root: The root to test.
 *
 * Return: The natural square root of num. If num does not
 * have a natural square root, returns -1.
 */
int find_sqrt(int num, int root)
{
	if (root * root == num)
		return (root);
	else if (root * root > num)
		return (-1);
	return (find_sqrt(num, root + 1));
}

