#include <stdlib.h>
#include "main.h"
/**
 * _realloc - entry point
 * description:  function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: NULL if 0 and ptr is not NULL,
 * If new_size == old_size do not do anything and return ptr,
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *memory;
	unsigned int i;
	char *ptr_copy, *x;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		memory = malloc(new_size);
		if (memory == NULL)
			return (NULL);
		return (memory);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_copy = ptr;
	memory = malloc(sizeof(*ptr_copy) * new_size);
	if (memory == NULL)
	{
		free(ptr);
		return (NULL);
	}
	x = memory;
	for (i = 0; i < old_size && i < new_size; i++)
		x[i] = *ptr_copy++;
	free(ptr);
	return (memory);
}



