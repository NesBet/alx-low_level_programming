#include <stdio.h>
/**
 * main - Print first 50 fibonacci numbers.
 * Starting with; 1 and 2 and
 * followed by a new line.
 * Return: 0 always
 */
int main(void)
{
	long int i, j, k, next;

	j = 1;

	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		} else
		{
			printf("%ld\n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}
	return (0);
}
