#include "main.h"
/**
 * print_last_digit - main block
 * Description: printing the last digit of a number
 * @n: the integer variable
 * Return: the value of last digit
 */
int print_last_digit(int n)
{
	int m = n % 10;

	if (m < 0)
		m *= -1;
	_putchar(m + '0');
	return (m);
}

