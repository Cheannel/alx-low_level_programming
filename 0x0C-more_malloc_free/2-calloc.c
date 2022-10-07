#include <stdlib.h>
#include "main.h"
/**
 * _calloc - main block
 * description: function allocates memory for an array of nmemb elements
 * of size bytes each and returns a pointer to the allocated memory
 * @nmemb: the number of elements
 * @size: the number of bytes of each element of the array
 * Return: NULL if nmemb or size is 0, and also if the function(malloc) fails
 * else, a pointer to the allocated memory is returned.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *memory;
	char *x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(size * nmemb);
	if (memory == NULL)
		return (NULL);
	x = memory;
	for (i = 0; i < (size * nmemb); i++)
		x[i] = '\0';
	return (memory);
}
