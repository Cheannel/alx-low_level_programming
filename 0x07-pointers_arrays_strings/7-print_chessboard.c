#include "main.h"
/**
 * print_chessboard - entry point
 * description: a function that prints the chessboard
 * @a: the chessboard
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; a[x][7]; x++)
	{
		for (y = 0; y < 8; y++)

			_putchar(a[x][y]);
		_putchar('\n');
	}
}
