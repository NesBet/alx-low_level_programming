#include "main.h"

/**
 * print_line - Prints straight lines n times.
 * @n: Times the straight line is printed.
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
