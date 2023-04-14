#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Bytes amount.
 *
 * Return: Pointer to the allocated memory location.
 * Return status value of 98 if malloc fails.
 */
void *malloc_checked(unsigned int b)
{
	char *c;

	c = malloc(b);
	if (c == NULL)
		exit(98);
	return (c);
}
