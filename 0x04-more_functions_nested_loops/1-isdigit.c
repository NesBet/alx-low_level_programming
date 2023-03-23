#include "main.h"

/**
 * _isdigit - Checks if parameter is a number from 0 to 9.
 * @c: input number.
 * Return: 1 if parameter is (0 to 9), 0 if otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
