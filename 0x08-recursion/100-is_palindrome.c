#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Returns length of given string.
 * @s: The given string.
 *
 * Return: Length of the given string.
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}
/**
 * checker - A helper function.
 * @str: Given string.
 * @len: Length of given string.
 * @count: Recursion counter.
 *
 * Return: 1 if given string is a palindrome, 0 if not.
 */
int checker(char *str, int len, int count)
{
	if (count >= len)
		return (1);
	if (str[len] == str[count])
		return (checker(str, len - 1, count + 1));
	return (0);
}
/**
 * is_palindrome - Checks if the given string is a palindrome.
 * @s: String to be checked.
 *
 * Return: 1 if given string is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int count = 0;

	return (checker(s, len - 1, count));
}
