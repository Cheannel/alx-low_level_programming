#include "main.h"
/**
 * print_square - main block
 * Descrription: prints a line
 * @size: the integer variable
 */
void print_square(int size)
{
	int lngth1, lngth2;

	if (size > 0)
	{
		for (lngth1 = 0; lngth1 < size; lngth1++)
		{
			for (lngth2 = 0; lngth2 < size; lngth2++)
				_putchar('#');
			if (lngth1 == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
