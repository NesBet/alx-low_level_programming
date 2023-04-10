#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 *main - Adds positive numbers.
 *@argc: Total number of command line arguments.
 *@argv: Array containing the program command line arguments.
 *
 *Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i, j, total = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[i]);
	}
	printf("%d\n", total);
	return (0);
}
