#include "dog.h"

/**
 * init_dog - entry point
 * description: a function that initialize a variable of type struct dog
 * @d: the struct dog
 * @name: the dog's  name
 * @age: age of the dog
 * @owner: the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
