#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to the array of chars.
 */
char *str_concat(char *s1, char *s2)
{
	char *stop;
	unsigned int i, j, k, stop;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	line = malloc(sizeof(char) * (i + j + 1));

	if (line == NULL)
	{
		free(line);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		line[k] = s1[k];

	stop = j;
	for (j = 0; j <= limit; k++, j++)
		line[k] = s2[j];

	return (line);
}
