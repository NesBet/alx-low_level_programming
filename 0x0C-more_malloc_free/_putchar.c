#include "main.h"
#include <unistd.h>

/**
 * _putchar - Prints character c to stdout.
 * @c: Character to be printed.
 *
 * Return: 1 for success and -1 for an error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
