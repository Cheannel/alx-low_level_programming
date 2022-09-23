#include "main.h"

/**
 * print_number - entry point
 * Description: a function that prints an integer
 * @n: the integer to be printed
 * Return: always 0
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
		_putchar('0');
	if (n / 10)
		_putchar(n / 10);
	_putchar(n % 10 + '0');
}
