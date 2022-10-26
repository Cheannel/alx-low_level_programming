#ifndef DOG_H
#define DOG_H

/**
 * filename - dog.h
 * description: a header file that defines a new type 'struct dog'
 */

/**
 * struct dog - a new type defining a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the dog's owner
 */
struct dog
{
	char * name;
	char * owner;
	float age;
};

/**
 * dog_t - entry point
 * description: typedef for the struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
