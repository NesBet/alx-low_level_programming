#include <stdio.h>
#include "main.h"

/**
 * @argc: Number of arguments passed to the program.
 * @argv: Strings array containing the argument values.
 *
 * Return: 0 on success, else if error.
 */
int main(int argc, char *argv[])
{
	int num_args;

	if (argc < 2)
	{
	printf("Usage: %s [arg1] [arg2] ...\n", argv[0]);
	return 1;
	}

	num_args = argc - 1;
	printf("Number of arguments: %d\n", num_args);

	return 0;
}
