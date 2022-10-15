#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - entry point
 * description: a function that searches for an integer
 * @size: the size of the number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * @array: the array of intergers
 * Return: -1 if no element matches or if size <= 0,
 * els, returns the index of the first element for which the cmp function does
 * not return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
