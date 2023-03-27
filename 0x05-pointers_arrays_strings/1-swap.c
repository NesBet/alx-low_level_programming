#include "main.h"

/**
 * swap_int - Swaps values of two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: Null.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
