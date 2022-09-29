#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - main block
 * desription: a function that prints a string in reverse
 * @s: the string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(s);
	}
}
