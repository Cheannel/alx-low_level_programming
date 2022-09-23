#include "main.h"

/**
 * print_number - entry point
 * Description: a function that prints an integer
 * @n: the integer to be printed
 * Return: always 0
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num == 0)
		_putchar('0');
	if (num / 10)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
