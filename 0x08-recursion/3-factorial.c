#include "main.h"
#include <stdio.h>

/**
 * factorial - Returns the factorial of a given number.
 * @n: The input number.
 *
 * Return: Factorial of given number.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
