#include <stdio.h>
#include "main.h"
/**
 *main - Prints its name, followed by a new line.
 *@argc: Total number of command line arguments.
 *@argv: Array containg the program command line arguments.
 *
 *Return: 0 for success, else if error.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
