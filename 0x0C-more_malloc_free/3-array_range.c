#include <stdlib.h>
#include "main.h"
/**
 * array_range - entry point
 * description: function that creates an array of integers
 * @min: the minimum value of the array
 * @max: the maximum value
 * Return: NULL if min > max o if the function fails
 * else, return the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array, size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = min++;
	return (array);
}
