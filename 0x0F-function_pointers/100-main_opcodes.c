#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main function.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int i, tbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	tbytes = atoi(argv[1]);

	if (tbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < tbytes; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != tbytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
