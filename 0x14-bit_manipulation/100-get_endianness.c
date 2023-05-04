#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int ui;
	char *c;

	ui = 1;
	c = (char *) &ui;

	return ((int)*c);
}
