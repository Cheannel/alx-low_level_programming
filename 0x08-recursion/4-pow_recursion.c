#include "main.h"
#include <string.h>
/**
 * _pow_recursion - entry point
 * description: a function that returns the value of x raised to the power of y
 * @x: the base number
 * @y: the power of 'x'
 * Return: the value of 'x' raised to the power of 'y'.
 */
int _pow_recursion(int x, int y)
{
	int num = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	num *= _pow_recursion(x, y - 1);
	return (num);
}
