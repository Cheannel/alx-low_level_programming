#include "main.h"
#include <string.h>
/**
 * _memset - entry point
 * descrition: function fills the first 'n' bytes of the memory area
 * pointed to by 's' with the constant byte 'b'
 * @n: number of bytes to be filled
 * @s: a pointer to the memory area to be filled
 * @b: the character to be filled
 * Return: a pointer to the memory area 's'
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	unsigned char *memory = s, value = b;

	for (i = 0; i < n; i++)
		memory[i] = value;
	return (memory);
}
