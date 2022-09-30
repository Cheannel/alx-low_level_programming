#include "main.h"
#include <string.h>

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - Checks if a number is divisible.
 * @num: the number.
 * @div: the divisor.
 * Return: 0 If the number is divisible,
 * return -1 if not divisible
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: number to be checked
 * Return: 0 if the integer is not prime
 * return -1
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}
