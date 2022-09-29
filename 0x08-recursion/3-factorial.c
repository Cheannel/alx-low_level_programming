#include "main.h"
#include <string.h>
/**
 * factorial - entry point
 * description: a function that returns the factorial of a given number
 * @n: the number
 * Return: -1 if n is lower than 0(representing an error)
 * return factorial of n, if n > 0
 */
int factorial(int n)
{
	int i;

	if (n < 0)
		return (-1);
	if (n >= 0 && n <= 1)
		return (1);
	i = factorial(n - 1);
	return (i);
}
