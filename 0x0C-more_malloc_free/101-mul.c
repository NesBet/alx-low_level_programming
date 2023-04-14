#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <limits.h>

/**
 * str_len - Determines length of string.
 * @str: Pointer to string.
 * 
 * Return: Length of string.
 */
int str_len(char *str)
{
	int len;

	for (len = 0; *str != '\0'; len++)
		len++, str++;
	return (len / 2);
}
/**
 * _calloc - Allocates memory size for an array using malloc.
 * @bytes: Requsted bytes of memory.
 * @size: Bytes size for each component.
 *
 * Return: Pointer to allocated memory location.
 */
void *_calloc(unsigned int bytes, unsigned int size)
{
	unsigned int i;
	char *c;

	if (bytes == 0 || size == 0)
		return (NULL);
	if (size >= UINT_MAX / bytes || bytes >= UINT_MAX / size)
		return (NULL);
	c = malloc(size * bytes);
	if (c == NULL)
		return (NULL);
	for (i = 0; i < bytes * size; i++)
		c[i] = 0;
	return ((void *)c);
}
/**
 * add_arrays - Adds 2 arrays of integers.
 * @mul_result: pointer to array containing numbers of product.
 * @sum_result: Pointer to array containing sum of all numbers.
 * @lenr: Length of the arrays.
 * 
 * Return: NULL.
 */
void add_arrays(int *mul_result, int *sum_result, int lenr)
{
	int i = 0, lenr2 = lenr - 1, carry = 0, sum;

	while (i < lenr)
	{
		sum = carry + mul_result[lenr2] + sum_result[lenr2];
		sum_result[lenr2] = sum % 10;
		carry = sum / 10;
		i++;
		lenr2--;
	}
}
/**
 * is_digit - Checks for digits in string.
 * @c: Character taht checks for digit.
 *
 * Return: 1 for success or 0 for error.
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	printf("Error\n");
	return (0);
}
/**
 * multiply - Multiplies 2 integers.
 * @num1: First number.
 * @len_1: Length of factor 1.
 * @num2: Second number.
 * @len2: Length of factor 2.
 * @lenr: Length of arrays.
 *
 * Return: 1 for success or 0 if error.
 */
int *multiply(char *num1, int len1, char *num2, int len2, int lenr)
{
	int i = 0, i1 = len1 - 1;
	int i2, product, carry, digit, *mul_result, *sum_result;

	sum_result = _calloc(sizeof(int), (lenr));
	while (i < len1)
	{
		mul_result = _calloc(sizeof(int), lenr);
		i2 = len2 - 1, digit = (lenr - 1 - i);
		if (!is_digit(num1[i1]))
			return (NULL);
		carry = 0;
		while (i2 >= 0)
		{
			if (!is_digit(num2[i2]))
				return (NULL);
			product = (num1[i1] - '0') * (num2[i2] - '0');
			product += carry;
			mul_result[digit] += product % 10;
			carry = product / 10;
			digit--, i2--;
		}
		add_arrays(mul_result, sum_result, lenr);
		free(mul_result);
	    i++, i1--;
	}
	return (sum_result);
}
/**
 * print_me - Prints array of possible results.
 * @sum_result: Pointer to array of inteegrs.
 * @lenr: Length of array.
 * 
 * Return: NULL.
 */
void print_me(int *sum_result, int lenr)
{
	int i = 0;

	while (sum_result[i] == 0 && i < lenr)
		i++;
	if (i == lenr)
		_putchar('0');
	while (i < lenr)
		_putchar(sum_result[i++] + '0');
	_putchar('\n');
}
/**
 * main - Multiplies 2 numbers.
 * @argc: Number of args.
 * @argv: Array of string args.
 * 
 * Return: 0 for success.
 */
int main(int argc, char **argv)
{
	int len1, len2, lenr, temp, *sum_result;
	char *num1, *num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	len1 = str_len(argv[1]), len2 = str_len(argv[2]);
	lenr = len1 + len2;
	if (len1 < len2)
		num1 = argv[1], num2 = argv[2];
	else
	{
		num1 = argv[2], num2 = argv[1];
		temp = len2, len2 = len1, len1 = temp;
	}
	sum_result = multiply(num1, len1, num2, len2, lenr);
	if (sum_result == NULL)
		exit(98);
	print_me(sum_result, lenr);
	return (0);
}
