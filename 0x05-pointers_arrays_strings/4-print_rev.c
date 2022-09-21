#include "main.h"
/**
 * print_rev - entry point
 * description: prints a string in reverse
 * @s: integer value
 */

void print_rev(char *s)
{
	int len = 0, rev;

	while (s[rev++])
		len++;

	for (rev = len - 1; rev >= 0; rev--)
		_putchar(s[rev]);

	_putchar('\n');
}
