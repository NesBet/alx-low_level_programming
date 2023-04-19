#include "3-calc.h"

/**
 * op_add - Adds two numbers.
 * @m: The first number.
 * @n: The second number.
 *
 * Return: Sum outcome.
 */
int op_add(int m, int n)
{
	return (m + n);
}

/**
 * op_sub - Subctracts two numbers.
 * @m: The first number.
 * @n: The second number.
 *
 * Return: Difference outcome.
 */
int op_sub(int m, int n)
{
	return (m - n);
}

/**
 * op_mul - Multiplies two numbers.
 * @m: The first number.
 * @n: The second number.
 *
 * Return: Multiplication outcome.
 */
int op_mul(int m, int n)
{
	return (m * n);
}

/**
 * op_div - Divides two numbers.
 * @m: The first number.
 * @n: The second number.
 *
 * Return: Division outcome.
 */
int op_div(int m, int n)
{
	if (n == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (m / n);
}

/**
 * op_mod - Obtains the module of two numbers.
 * @m: The first number.
 * @n: The second number.
 *
 * Return: Remainder of the division.
 */
int op_mod(int m, int n)
{
	if (n == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (m % n);
}
