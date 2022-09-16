#include "main.h"
/**
 * print_numbers - main block
 * Description: printing numbers from 0 to 9, then followed by a new line
 */
void print_numbers(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
		_putchar((digit % 10) + '0');
	_putchar('\n');
}
