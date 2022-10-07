#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - entry point
 * description: a function that allocates memory using malloc
 * @b: the number  bytes to be allocated
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *memo = malloc(b);


	if (memo == NULL)
		exit(98);
	return (memo);
}
