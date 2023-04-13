#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _is_zero - Checks if any number is zero
 * @argv: Argument vector.
 *
 * Return: NULL.
 *
 */
void _is_zero(char *argv[])
{
	int i, in1 = 1, in2 = 1;

	for (i = 0; argv[1][i]; i++)
		if (argv[1][i] != '0')
		{
			in1 = 0;
			break;
		}

	for (i = 0; argv[2][i]; i++)
		if (argv[2][i] != '0')
		{
			in2 = 0;
			break;
		}

	if (in1 == 1 || in2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * _initialize_array - Initialize memory to 0.
 * @ar: Array.
 * @lar: Length of the char array.
 *
 * Return: Pointer to the array.
 */
char *_initialize_array(char *ar, int lar)
{
	int i = 0;

	for (i = 0; i < lar; i++)
		ar[i] = '0';
	ar[lar] = '\0';
	return (ar);
}

/**
 * _checknum - Checks length of the number
 * and if number is in decimal notation.
 * @argv: Arguments vector.
 * @n: Array's row.
 *
 * Return: Length of the number.
 */
int _checknum(char *argv[], int n)
{
	int lon;

	for (lon = 0; argv[n][ln]; ln++)
		if (!isdigit(argv[n][ln]))
		{
			printf("Error\n");
			exit(98);
		}

	return (lon);
}

/**
 * main - Multiplies two positive numbers.
 * @argc: Total number of arguments.
 * @argv: Arguments vector.
 *
 * Return: 0 for success.
 */
int main(int argc, char *argv[])
{
	int lon1, lon2, lonout, add, addl, i, j, k, m;
	char *nout;

	if (argc != 3)
		printf("Error\n"), exit(98);
	lon1 = _check_num(argv, 1), lon2 = _checknum(argv, 2);
	_is_zero(argv), lonout = lon1 + lon2, nout = malloc(lonout + 1);
	if (nout == NULL)
		printf("Error\n"), exit(98);
	nout = _initialize_array(nout, lonout);
	k = lonout - 1, i = lon1 - 1, j = lon2 - 1, m = addl = 0;
	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (addl > 0)
			{
				add = (nout[k] - '0') + addl;
				if (add > 9)
					nout[k - 1] = (add / 10) + '0';
				nout[k] = (add % 10) + '0';
			}
			i = lon1 - 1, j--, addl = 0, m++, k = lonout - (1 + m);
		}
		if (j < 0)
		{
			if (nout[0] != '0')
				break;
			lonout--;
			free(nout), nout = malloc(lonout + 1), nout = _initialize_array(nout, lonout);
			k = lonout - 1, i = lon1 - 1, j = lon2 - 1, m = addl = 0;
		}
		if (j >= 0)
		{
			add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (nout[k] - '0') + addl;
			addl = add / 10, nout[k] = (add % 10) + '0';
		}
	}
	printf("%s\n", nout);
	return (0);
}
