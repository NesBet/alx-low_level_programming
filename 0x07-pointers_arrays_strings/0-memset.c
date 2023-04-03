 #include "main.h"
 #include <stdio.h>
 /**
 * _memset - Fills memory with
 * a constant byte.
 * @s: Memory area to be filled.
 * @b: A constant byte.
 * @n: No of bytes to be filled.
 *
 * Return: Pointer to dest.
 */
 char *_memset(char *s, char b, unsigned int n)
 {
        unsigned int i;

        for (i = 0; i < n; i++)
                *(s + i) = b;

        return (s);
 }
