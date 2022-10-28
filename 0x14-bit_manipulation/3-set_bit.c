#include "main.h"

/**
 * set_bit - main block
 * description: a function that sets the value of a bit to 1 at a given index
 * @index: the index, starting from 0 of the bit
 * @n: the number of bit
 * Return: 1, else an error occur, returns -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);
	return (1);
}
