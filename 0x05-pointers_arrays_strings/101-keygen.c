#include "main.h"
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * description: creation of password
 * Return: always 0
 */
int main(void)
{
	int sum;
	char n;

	srand(time(NULL));
	while (sum <= 2645)
	{
		n = rand() % 128;
		sum += n;
		_putchar(n);

	}
	_putchar(2772 - sum);
	return (0);
}
