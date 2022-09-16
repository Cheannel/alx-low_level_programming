#include "main.h"
/**
 * more_numbers - main block
 * Description: prints 10 times from a number
 * Return: void
 */
void more_numbers(void)
{
	char a, b;
	int count = 0;

	while (count < 10)
	{
		for (a = 0; a <= 14; a++)
		{
			b = a;
			if (a > 9)
			{
				_putchar('1');
				b = a % 10;
			}
			_putchar('0' + b);
		}

		_putchar('\n');
		count++;
	}
}

