#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - entry point
 * description: a function that executes a function given as a parameter
 * on each element of array
 * @size: the size of the array
 * @action: a pointer to the function to be used
 * @array: the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
