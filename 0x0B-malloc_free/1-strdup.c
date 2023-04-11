#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * containing a copy of the string given as a parameter.
 * @str: The string.
 *
 * Return: A pointer to an array of chars.
 */
char *_strdup(char *str)
{
	char *line;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	line = (char *)malloc(sizeof(char) * (i + 1));

	if (line == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		line[j] = str[j];

	return (line);
}
