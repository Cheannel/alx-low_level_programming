#include "main.h"
/**
 * puts2 - main block
 * description: prints every other character of a string
 *@str: a string
 */
void puts2(char *str)
{
	int a = 0, b = 0;

	while (str[a++])
		b++;
	for (a = 0; a < b; a += 2)
		_putchar(str[a]);

	_putchar('\n');
}
