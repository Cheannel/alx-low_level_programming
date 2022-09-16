#include "main.h"
#include <stdio.h>
/**
 * print_line - main block
 * Description: draws a straight line in the terminal from 0 to 14
 * @n: integer variable
 * Return: 0
 */
void print_line(int n)
{
	int line = 0;

	while (line < n && n > 0)
	{
		_putchar('_');
		line++;
	}

	_putchar('\n');
}
