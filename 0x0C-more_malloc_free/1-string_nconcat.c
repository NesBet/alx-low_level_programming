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
	char *cout;
	unsigned int lc1, lc2, lcout, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (lc1 = 0; s1[lc1] != '\0'; l1++)
		;

	for (lc2 = 0; s2[lc2] != '\0'; l2++)
		;

	if (n > lc2)
		n = lc2;

	lcout = lc1 + n;

	cout = malloc(lcout + 1);

	if (cout == NULL)
		return (NULL);

	for (i = 0; i < lcout; i++)
		if (i < lc1)
			cout[i] = s1[i];
		else
			cout[i] = s2[i - lc1];

	cout[i] = '\0';

	return (cout);
}
