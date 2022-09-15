#include "main.h"
/**
 * print_sign - entry point
 * Description: printing signs of a number
 * @n: integer variable
 * Return: 1 if n is greater than 0, -1 if less
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
