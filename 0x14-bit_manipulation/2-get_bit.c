#include "main.h"

/**
 * get_bit - main block
 * description: a function that returns the value of a bit at a given index
 * @index: the index starting from 0
 * @n: the bit
 * Return: -1 if an error occured, otherwise the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
