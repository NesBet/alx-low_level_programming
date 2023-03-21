#include "main.h"
/**
 * _isalpha - checks for alphabetic character both small and capital letters.
 *
 * c is the character to be checked.
 *
 * Return: 1 if c is a letter, 0 if otherwise.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
