#include "main.h"
#include <studio.h>
#include <stdlib.h>

/**
 * create_array: Creates an array of chars.
 * @size: Actual size of the created array.
 * @c: Specific char.
 *
 * Return: Pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(c) * size);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
