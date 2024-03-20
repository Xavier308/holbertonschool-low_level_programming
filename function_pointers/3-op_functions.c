#include "3-calc.h"

/**
 * op_add - Adds two numbers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b) { return (a + b); }

/**
 * op_sub - Subtracts one number from another.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b) { return (a - b); }

/**
 * op_mul - Multiplies two numbers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b) { return (a * b); }

/**
 * op_div - Divides one number by another.
 * @a: The numerator.
 * @b: The denominator.
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b) { return (a / b); }

/**
 * op_mod - Finds the remainder of the division of one number by another.
 * @a: The numerator.
 * @b: The denominator.
 *
 * Return: The remainder of a divided by b.
 */
int op_mod(int a, int b) { return (a % b); }

