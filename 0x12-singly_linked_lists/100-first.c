#include <stdio.h>

/**
 * before - Executed before the main function.
 * Return: None.
 */

void __attribute__ ((constructor)) before()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
