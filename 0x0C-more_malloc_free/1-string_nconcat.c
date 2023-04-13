#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: Bytes amount.
 *
 * Return: Pointer to the allocated memory location.
 * Return a status value of 98 if malloc fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *out;
	unsigned int l1, l2, lout, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (l1 = 0; s1[lc1] != '\0'; l1++)
		;

	for (l2 = 0; s2[l2] != '\0'; l2++)
		;

	if (n > l2)
		n = l2;

	lout = l1 + n;

	out = malloc(lout + 1);

	if (out == NULL)
		return (NULL);

	for (i = 0; i < lout; i++)
		if (i < l1)
			cout[i] = s1[i];
		else
			cout[i] = s2[i - l1];

	cout[i] = '\0';

	return (out);
}
