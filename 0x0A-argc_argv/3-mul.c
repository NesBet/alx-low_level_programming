#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *main - Multiplies two numbers.
 *@argc: Total number of command line arguments.
 *@argv: Array containing the program command line arguments.
 *
 *Return: 0 for success, else if error.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
