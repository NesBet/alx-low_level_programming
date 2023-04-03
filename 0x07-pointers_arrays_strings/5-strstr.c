#include "main.h"
/**
 * _strstr - Locates a substring.
 *
 * @haystack: This is the entire string.
 * @needle: The substring.
 *
 * Return: Pointer to the beginning of located substring,
 * NULL if the substring is not located.
*/
char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (bhaystack);
		haystack = bhaystack + 1;
	}
	return (0);
}
