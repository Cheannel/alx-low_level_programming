#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - entry point
 * description: returns a pointer to a 2 dimensional array of integer
 * @width: the width ofbthe 2-D array
 * @height: the height of the 2-D array
 * Return: NULL if width or height is 0 or negative
 * returns NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int h_index, w_index;
	int **D;

	if (width <= 0 || height <= 0)
		return (NULL);
	D = malloc(sizeof(int *) * height);
	if (D == NULL)
		return (NULL);

	for (h_index = 0; h_index < height; h_index++)
	{
		D[h_index] = malloc(sizeof(int) * width);
		if (D[h_index] == NULL)
		{
			for (; h_index >= 0; h_index--)
				free(D[h_index]);
			free(D);
			return (NULL);
		}
	}
	for (h_index = 0; h_index < height; h_index++)
	{
		for (w_index = 0; w_index < width; w_index++)
			D[h_index][w_index] = 0;
	}
	return (D);
}
