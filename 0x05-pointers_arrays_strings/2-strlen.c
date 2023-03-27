#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @s: The input string.
 * Return: Length of given string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
