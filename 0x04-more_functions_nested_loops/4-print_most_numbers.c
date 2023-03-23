#include "main.h"

/**
 * print_most_numbers - Prints numbers between 0 to 9 excluding 2 and 4.
 * Return: null
 */
void print_most_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		if (ch != 50 && ch != 52)
			_putchar(ch);
	}
	_putchar('\n');
}
