#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: Name.
 * @f: The function pointer.
 *
 * Return: NULL.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
