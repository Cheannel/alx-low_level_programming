#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - main block
 * description: a function that prints a name
 * @name: the name to be printed by the function
 * @f:the pointer to the function that prints a name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
