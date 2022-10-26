#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - entry point
 * description:  a program that writes a function that frees dogs
 * @d: the dog to be freed
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
