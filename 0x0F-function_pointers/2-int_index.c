#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: The array's input inteegr..
 * @size: Size of the array.
 * @cmp: Pointer to the function for comparing values.
 *
 * Return: Index of the first element, if no elements matches
 * return -1, if size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
