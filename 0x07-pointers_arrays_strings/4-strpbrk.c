#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 *
 * @s: The first string.
 * @accept: The second string.
 *
 * Return: Pointer to a byte in s matching one of the
 * bytes in accept, or NULL if no identical byte is located.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
