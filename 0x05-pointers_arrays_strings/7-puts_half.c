#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The input string.
 * Return: Null.
 */
void puts_half(char *str)
{
        int count = 0, i;

        while (str[count] != '\0')
        {
                count++;
        }

        if (count % 2 == 1)
                i = (count + 1) / 2;
        else
                i = count / 2;

        for (; i < count; i++)
        {
                printf(str[i]);
        }
        _putchar('\n');
}
