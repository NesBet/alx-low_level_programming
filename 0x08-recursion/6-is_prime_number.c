#include "main.h"
#include <stdio.h>

/**
 * is_prime - Checks if the input number is a prime number.
 * @n: The input number.
 * @c: An iterator.
 *
 * Return: 1 if n is a prime number, 0 if otherwise.
 */
int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}
/**
 * is_prime_number - Checks if the input number is a prime number.
 * @n: The input number.
 *
 * Return: 1 if n is a prime number, 0 if otherwise.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
