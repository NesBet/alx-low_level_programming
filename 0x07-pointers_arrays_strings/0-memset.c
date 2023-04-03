#include "main.h"
/**
 * _memset - This fills memory with a
 * constant byte.
 * @s: The memory area.
 * @b: Constant byte.
 * @n: Total number of bytes filled.
 * Return: This is the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
	}
