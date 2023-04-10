#include <stdio.h>
#include "main.h"
/**
 *main - Prints number of arguments passed into it.
 *@argc: The total number of command line arguments.
 *@argv: Array containing the program command line arguments.
 *
 *Return: 0 if success, else if error.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
