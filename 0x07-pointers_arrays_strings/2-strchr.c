#include "main.h"
/**
 * _strchr -Locates a character in a string
 *
 * @s: The string.
 * @c: The character.
 *
 * Return: Pointer to first appearance of the character c.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
