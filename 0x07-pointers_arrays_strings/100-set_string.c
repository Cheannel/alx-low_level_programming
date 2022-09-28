#include "main.h"
/**
 * set_string - entry point
 * description: a function that sets the value of a pointer to a char.
 * @s: the pointer
 * @to: the char
 */
void set_string(char **s, char *to)
{
	*s = to;
}

