#include "main.h"

/**
 * print_square - Prints hashes in a square shape.
 * @size: The size of the square.
 * Return: Always.
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
