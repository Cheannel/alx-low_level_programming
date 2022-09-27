#include "main.h"
#include <string.h>
/**
 * _memcpy - entry point
 * description: function copies 'n' bytes from memory
 * area 'src' to memory area 'dest'
 * @n: number of bytes to be copied
 * @src: source to copy bytes from
 * @dest: destination to copy characters to
 * Return: a pointer to 'dest'
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; n < index; index++)
	{
		dest[index] = src[index];
	}
		return (dest);
}
