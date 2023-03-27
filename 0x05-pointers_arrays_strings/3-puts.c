#include "main.h"
/**
 * _puts - Prints a string followed by a new line.
 * @str: The input string.
 * Return: Null.
 */
void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}
