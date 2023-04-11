#include "main.h"
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
	int c, i, j, ia;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	arout = malloc((c + 1) * sizeof(char));

	if (arout == NULL)
	{
		free(arout);
		return (NULL);
	}

	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			arout[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			arout[ia] = av[i][j];
	}
	arout[ia] = '\0';

	return (arout);
}
