#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of my program.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: Pointer to the array of char.
 */
char *argstostr(int ac, char **av)
{
	char *arout;
	int k, i, j, b;

	if (ac == 0)
		return (NULL);

	for (k = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			k++;
		k++;
	}

	arout = malloc((k + 1) * sizeof(char));

	if (arout == NULL)
	{
		free(arout);
		return (NULL);
	}

	for (i = j = b = 0; b < c; j++, b++)
	{
		if (av[i][j] == '\0')
		{
			arout[ia] = '\n';
			i++;
			b++;
			j = 0;
		}
		if (b < k - 1)
			arout[b] = av[i][j];
	}
	arout[b] = '\0';

	return (arout);
}
