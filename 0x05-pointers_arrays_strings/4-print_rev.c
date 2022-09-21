#include "main.h"
/**
 * print_rev - entry point
 * description: prints a string in reverse
 * @s: integer value
 */

void print_rev(char *s)
{
	int rev = 0;

	while (s[rev])
		rev++;
	while (rev--)
		_putchar(s[rev]);
	_putchar('\n');
}
