#include "main.h"
#include <string.h>
/**
 * _puts_recursion - entry point
 * description: a funtion that prints a string, followed by a new line
 * @s: the string
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(s);
		_puts_recursion(s + 1);
	}
	else
		_putchar("\n");
}
