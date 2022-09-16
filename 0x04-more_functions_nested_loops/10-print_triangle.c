#include "main.h"
/**
 * print_triangle - main block
 * Description: drawing a triangle
 * @size: variable
 */
void print_triangle(int size)
{
	int height, base;

	if (size > 0)
		for (height = 1; height <= size; height++)
		{
			for (base = size - height; base > 0; base--)
				_putchar(' ');
			for (base = 0; base < height; base++)
				_putchar('#');
			if (height == size)
				continue;
			_putchar('\n');
		}
}
_putchar('\n');
}
