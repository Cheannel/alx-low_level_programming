#include "main.h"
/**
 * print_diagonal - entry point
 * Description: draws a diagonal line
 * @n: the variable
 */
void print_diagonal(int n)
{
	int line, a;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (a = 0; a < n; a++)
				_putchar(' ');
			_putchar('\\');
			if (line == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
