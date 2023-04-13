#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block.
 * @ptr: Pointer to the memory that was previously allocated.
 * @old_size: Size of the allocated space of ptr in bytes.
 * @new_size: New size of the new memory block in bytes.
 *
 * Return: ptr.
 * Returns ptr minus changes if new_size == old_size.
 * Returns NULL if malloc fails.
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
