#include <stdio.h>

/**
 * main - Prints the alphabets in reverse.
 *
 * Return: Always 0 for success.
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
