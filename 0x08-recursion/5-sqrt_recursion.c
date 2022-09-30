#include "main.h"
int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - Finds the natural square root of an inputted number.
 * @num: the number to find the square root of.
 * @root: the root to be tested.
 * Return: if the number has a natural square root - the square root.
 * return -1 if the number does not have a natural square root
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (find_sqrt(num, root + 1));
}
/**
 * _sqrt_recursion - main block
 * description: a function that returns the natural square root of a number
 * @n: the number
 * Return: natural square root of 'n'
 * return -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}
