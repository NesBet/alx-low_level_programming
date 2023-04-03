#include "main.h"
/**
 * set_string - Sets value of a pointer to a char type.
 *
 * @s: Pointer to pointer that needs to be set.
 *
 * @to: The string to set.
 */
void set_string(char **s, char *to)
{
		*s = to;
}
